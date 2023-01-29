#include "Conversion.hpp"

void  valid_arg(Conversion obj, char **av)
{
    if(obj.get_name().empty())
        throw "empty string";
    if (obj.get_name().length() > 1 && !std::isdigit(av[1][0]) && !std::isdigit(av[1][1]) 
    && obj.get_name() != "nan" && obj.get_name() != "-inff" && obj.get_name() != "+inff"
        && obj.get_name() != "-inf" && obj.get_name() != "+inf")
        throw "invalif arg";
}

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw "invalid arg";
        Conversion obj(av[1]); 
        valid_arg(obj, av);
        float num = atof(obj.get_name().c_str());
        obj.to_char(num);
        obj.to_int(num);
        obj.to_float(num);
        obj.to_double(num);
    }
    catch(const char *str)
    {
        std::cerr<<str<<std::endl;
    }
}