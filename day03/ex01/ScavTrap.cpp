#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Default Constructor Called"<<std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    std::cout<<"ScavTrap Constructor Called"<<std::endl;
    this->_name = name;
    this->_attack_damage = 20;
    this->_Energy_point = 50;
    this->_Hitpoint = 100;
}

ScavTrap::ScavTrap(const ScavTrap & op)
{
    *this = op;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & op)
{
      this->_attack_damage = op._attack_damage;
      this->_Energy_point  = op._Energy_point;
      this->_Hitpoint = op._Hitpoint;
      return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout<<this->_name + "is in keeper mode"<<std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    // if (check_healt())
    // {
        std::cout<<"ScavTrap " + _name + " attacks " + target;
        std::cout<<", causing "<<_attack_damage<<" point of damage!"<<std::endl;
        _attack_damage -= 1;
    // }
}
ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTarp Desctructor Called"<<std::endl;
}