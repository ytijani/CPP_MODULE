#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout<<this->_name + " attacks with their " + Weapon1->getType()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon   &weapon)
{

    this->Weapon1 =  &weapon;
    this->_name = name;
}
 