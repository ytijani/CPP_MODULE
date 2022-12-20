#include"Harl.hpp"


int main(int ac, char **av)
{
    Harl op;
    if (ac < 2)
    {
        std::cout<<"invalid arg"<<std::endl;
        return (0);
    }
    else
        op.complain(av[1]);
}