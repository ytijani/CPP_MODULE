#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe obj;
    try
    {
        if(ac < 2)
            throw "Error";
        obj.checkArg(av);
        obj.sortArg();
    }
    catch(const char *str)
    {
        std::cout<<str<<std::endl;
    }
}