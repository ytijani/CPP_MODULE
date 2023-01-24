#include "Conversion.hpp"


Conversion::Conversion(){}

Conversion::Conversion(std::string name)
{
    this->_name = name;
}

std::string Conversion::get_name()
{
    return (this->_name);
}

void    Conversion::to_char(std::string str)
{
    float num;

    num = std::atof(str.c_str());

    if (std::isnan(num) || std::isinf(num))
        std::cout<<"char : "<<"impossible"<<std::endl;
    else if (num < 32 || num > 127)
        std::cout<<"char : "<<"Non displayable"<<std::endl;
    else
        std::cout<<"char : "<<static_cast<char>(num)<<std::endl;
}

void    Conversion::to_int(std::string str)
{
    float num;

    num = std::atof(str.c_str());

    if (std::isnan(num) || std::isinf(num))
        std::cout<<"int : "<<"impossible"<<std::endl;
    else
        std::cout<<"int : "<<static_cast<int>(num)<<std::endl;
}

void    Conversion::to_float(std::string str)
{
    float num;

    num = std::atof(str.c_str());
    std::cout<<std::fixed;
    std::cout<<"float : "<<std::setprecision(1)<<static_cast<float>(num)<<"f"<<std::endl;
}

void    Conversion::to_double(std::string str)
{
    double num;

    num = std::atof(str.c_str());
    std::cout<<"double : "<<static_cast<double>(num)<<std::endl;
}

Conversion::~Conversion()
{

}