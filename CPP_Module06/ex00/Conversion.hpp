#ifndef CONVERSION_HPP
# define  CONVERSION_HPP

# include <iostream>
# include <cmath>
# include <climits>
# include <iomanip>
# include <cfloat> 

class Conversion
{
    private :
        std::string _name;
    public:
        Conversion();
        Conversion(std::string name);
        Conversion &operator=(const Conversion &obj);
        std::string get_name();
        void    to_char(float num);
        void    to_int(float num);
        void    to_float(float num);
        void    to_double(float num);
        int     invalid_num(std::string name);
        char    get_char(char c) const;
        int     get_nb(int nb) const;
        float     get_fnb(float nb) const;
        double    get_dnb(double nb) const;  
        ~Conversion();
};


#endif