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
     std::cout<<"ScavTrap Copy Constructor Called"<<std::endl;
    *this = op;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & op)
{
      std::cout<<"ScavTrap copy assignment called"<<std::endl;
      this->_name = op._name;
      this->_attack_damage = op._attack_damage;
      this->_Energy_point  = op._Energy_point;
      this->_Hitpoint = op._Hitpoint;
      return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout<<this->_name + " is now in Gate keeper mode"<<std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    if (check_healt() > 0)
    {
        std::cout<<"ScavTrap " + _name + " attacks " + target;
        std::cout<<", causing "<<_attack_damage<<" point of damage!"<<std::endl;
        _Energy_point--;
    }
}


ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTarp Desctructor Called"<<std::endl;
}