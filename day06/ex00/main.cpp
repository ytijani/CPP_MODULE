#include "Conversion.hpp"


int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw "invalid arg";
        Conversion obj(av[1]);
        obj.to_char(obj.get_name());
        obj.to_int(obj.get_name());
        obj.to_float(obj.get_name());
        obj.to_double(obj.get_name());
    }
    catch(const char *str)
    {
        std::cerr<<str<<std::endl;
    }
}