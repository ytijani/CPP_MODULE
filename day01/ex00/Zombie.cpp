#include"Zombie.hpp"

void    Zombie::announce()
{
    std::cout<<this->name + ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout<<"Constr called"<<std::endl;
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<<this->name + " deleted"<<std::endl;
}