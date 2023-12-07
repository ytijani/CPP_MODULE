#include "RPN.hpp"


int main(int ac, char **av)
{
    RPN rpn;
    try
    {
        if(ac != 2)
            throw "Invalid arg";
        else
            rpn.getLine(av[1]);
    }
    catch(const char *str)
    {
        std::cerr <<str << '\n';
    }
}