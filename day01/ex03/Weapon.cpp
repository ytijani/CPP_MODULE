#include "Weapon.hpp"

const std::string  & Weapon::getType()
{
    return (this->_name);
}

void  Weapon::setType(std::string name)
{
    this->_name = name;
}

Weapon::Weapon(std::string name)
{
    this->_name = name;
}
