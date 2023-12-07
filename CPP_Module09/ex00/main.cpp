#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    BitcoinExchange opt;
    try
    {
        if(ac != 2)
            throw "Error: could not open file.";
        opt.initMap(FILE);
        opt.parseFile(av[1]);
    }
    catch(const char *str)
    {
        std::cerr << str << std::endl;
    }
}
