#include"Harl.hpp"


int main(int ac, char **av)
{
    Harl op;
    if (ac < 2 || ac > 2)
    {
        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
        return (0);
    }
    else
        op.complain(av[1]);
}