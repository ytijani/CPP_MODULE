#ifndef CONVERSION_HPP
# define  CONVERSION_HPP

#include <iostream>
#include <cmath>
#include <iomanip> 
class Conversion
{
    private :
        std::string _name;
    public:
        Conversion();
        Conversion(std::string name);
        Conversion &operator=(const Conversion &obj);
        std::string get_name();
        void    to_char(std::string str);
        void    to_int(std::string str);
        void    to_float(std::string str);
        void    to_double(std::string str);
        ~Conversion();
};


#endif