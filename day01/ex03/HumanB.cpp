#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void    HumanB::attack()
{
    std::cout<<this->_name + " attacks with their " + this->Weapon->getType()<<std::endl;
}

void    HumanB::setWeapon(::Weapon & We)
{
   this->Weapon = & We;
}