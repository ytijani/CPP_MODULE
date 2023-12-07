#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout<<this->_name + " attacks with their " + Weapon1.getType()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon   &weapon) : Weapon1(weapon), _name(name) {}