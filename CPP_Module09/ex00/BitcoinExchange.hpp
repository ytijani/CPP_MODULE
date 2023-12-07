#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <chrono>
#include <algorithm>
#include <fstream>
#include <list>
#include <sstream>

#define FILE "data.csv"
class BitcoinExchange
{
    private :
        std::map<std::string, double>   btc;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &opt);
        BitcoinExchange &operator=(const BitcoinExchange &opt);

           
        void           parseFile(const std::string &path);
        void           parseLine(const std::string &line);
        void           initMap(const std::string &path);
        void           printData(const std::string &date, const std::string &value);
        bool           checkError(const std::string &line);


        bool isNumber(const std::string &value);
        bool isDateValid(const std::string& date);
        bool isValueValid(const std::string& value);

        ~BitcoinExchange();
};


#endif