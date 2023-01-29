#include "Conversion.hpp"

Conversion::Conversion(){}

Conversion::Conversion(std::string name)
{
    if (name.empty())
        throw "empty string";
    if (invalid_num(name))
        throw "invalid number";
    this->_name = name;
}

std::string Conversion::get_name()
{
    return (this->_name);
}

void    Conversion::to_char(float num)
{
    if (std::isnan(num) || std::isinf(num) || num > INT_MAX || num < INT_MIN)
        std::cout<<"char : "<<"impossible"<<std::endl;
    else if (num < 32 || num > 127)
        std::cout<<"char : "<<"Non displayable"<<std::endl;
    else
        std::cout<<"char : "<<get_char(static_cast<char>(num))<<std::endl;
}

int     Conversion::invalid_num(std::string name)
{
    int i = 0;
    int count = 0;
    while(name[i])
    {
        if (name[i] == '.')
            count++;
        i++;
    }
    if (count > 1)
        return (1);
    return (0);
}

void    Conversion::to_int(float num)
{
    if (std::isnan(num) || std::isinf(num) || num >= INT_MAX || num <= INT_MIN)
        std::cerr<<"int : "<<"impossible"<<std::endl;
    else
        std::cout<<"int : "<<get_nb(static_cast<int>(num))<<std::endl;
}

void    Conversion::to_float(float num)
{
    std::cout<<std::fixed;
    std::cout<<"float : "<<std::setprecision(1)<<get_fnb(static_cast<float>(num))<<"f"<<std::endl;
}

void    Conversion::to_double(float num)
{
    std::cout<<"double : "<<get_dnb(static_cast<double>(num))<<std::endl;
}

char    Conversion::get_char(char c) const
{
    return (c);
}

int    Conversion::get_nb(int nb) const
{
    return (nb);
}

float   Conversion::get_fnb(float nb) const
{
    return (nb);
}

double  Conversion::get_dnb(double nb) const
{
    return (nb);
}

Conversion::~Conversion()
{

}