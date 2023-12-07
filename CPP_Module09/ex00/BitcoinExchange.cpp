#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &opt)
{
    *this = opt;   
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &opt)
{
    (void)opt;
    return (*this);   
}

void BitcoinExchange::initMap(const std::string &path)
{
    std::ifstream file(path);
    std::stringstream str;
    std::string line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            size_t find = line.find(",");
            btc[line.substr(0, find)] = atof((line.substr(find + 1, line.length())).c_str());
        }
    }
    file.close();
}

bool BitcoinExchange::isNumber(const std::string &value)
{
    bool hasMinusSign = false;
    bool hasManyDots = false;

    for (size_t i = 0; i < value.length(); i++)
    {
        if (i == 0 && value[i] == '-')
        {
            hasMinusSign = true;
        }
        else if (value[i] == '.')
        {
            if (hasManyDots)
            {
                return false;
            }
            hasManyDots = true;
        }
        else if (!isdigit(value[i]) && value[i] != '-')
        {
            return false;
        }
        else if (value[i] == '-' && hasMinusSign)
        {
            return false;
        }
    }
    return true;
}

bool BitcoinExchange::isDateValid(const std::string &date)
{
    std::istringstream ss(date);
    int year, day, month;
    char dash1, dash2;
    if (ss >> year >> dash1 >> month >> dash2 >> day &&
        dash1 == '-' && dash2 == '-' &&
        year >= 2000 && year <= 2024 &&
        month >= 1 && month <= 12 &&
        day >= 1 && day <= 31)
    {
        return true;
    }
    return (false);
}
bool BitcoinExchange::isValueValid(const std::string &value)
{
    if (!isNumber(value))
    {
        std::cout << "Error: bad input => " << value << std::endl;
        return false;
    }
    long t1 = atol(value.c_str());
    if (t1 < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    else if (t1 > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

void BitcoinExchange::printData(const std::string &date, const std::string &value)
{
    double b;
    std::map<std::string, double>::iterator it = btc.upper_bound(date);
    if (it != btc.begin())
        it--;
    b = atof(value.c_str());
    std::cout << date << " => " << b << " = " << b * it->second << std::endl;
}

void BitcoinExchange::parseLine(const std::string &line)
{
    size_t find = line.find_first_of("|");
    if (find == std::string::npos)
        std::cout << "Error: bad input => " << line << std::endl;
    else
    {
        size_t find = line.find("|");
        if (isDateValid(line.substr(0, find)))
        {
            if (isValueValid(line.substr(find + 1, line.length())))
                return printData(line.substr(0, find), line.substr(find + 1, line.length()));
        }
        else
        {
            std::cout << "Error: bad input => " << line.substr(0, find) << std::endl;
        }
    }
}

bool BitcoinExchange::checkError(const std::string &line)
{
    std::string lineWithoutSpaces = line;
    lineWithoutSpaces.erase(std::remove_if(lineWithoutSpaces.begin(), lineWithoutSpaces.end(), ::isspace), lineWithoutSpaces.end());
    size_t find = lineWithoutSpaces.find_first_of("|");
    if (find == std::string::npos)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }
    std::string val = lineWithoutSpaces.substr(find + 1, lineWithoutSpaces.length());
    size_t check_value = val.find_first_not_of(" \t\r\v\f\r");
    if(check_value == std::string::npos)
    {  
        std::cout << "Error: bad input => " << line << std::endl;
        return false;
    }
    return true;
}
void BitcoinExchange::parseFile(const std::string &path)
{
    std::ifstream inputFile(path);
    std::string line;
    size_t find = 0;
    bool isFirstLine = false;
    bool isEmpty = true;
    if (inputFile.is_open())
    {
        while (getline(inputFile, line))
        {
            isEmpty = false;
            if (checkError(line.substr(find)) == false)
                continue;
            line.erase(remove_if(line.begin(), line.end(), ::isspace), line.end());
            if (isFirstLine == false)
            {
                if (line.find("date|value") == 0 && line.length() <= 10)
                {
                    isFirstLine = true;
                    continue;
                }
                else
                    throw "Invalid header in input file";
            }
            parseLine(line);
        }
    }
    else
        throw " Error: could not open file.";
    if(isEmpty)
        throw "Error : file is empty";
}

BitcoinExchange::~BitcoinExchange()
{

}