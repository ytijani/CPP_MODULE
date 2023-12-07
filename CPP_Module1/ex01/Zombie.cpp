#include"Zombie.hpp"

void    Zombie::announce()
{
    std::cout<<this->name + ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    std::cout<<"Const called"<<std::endl;
}

Zombie::~Zombie()
{
    std::cout<<this->name + " deleted"<<std::endl;
}