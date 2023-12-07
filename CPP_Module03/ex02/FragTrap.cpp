#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"FragTrap Default Constructor Called"<<std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout<<"FragTrap Constructor Called"<<std::endl;
    this->_name = name;
    this->_attack_damage = 30;
    this->_Energy_point = 100;
    this->_Hitpoint = 100; 
}

FragTrap::FragTrap(const FragTrap & op)
{
    *this = op;
}

FragTrap &FragTrap::operator=(FragTrap const & op)
{
      this->_attack_damage = op._attack_damage;
      this->_Energy_point  = op._Energy_point;
      this->_Hitpoint = op._Hitpoint;
      return (*this);
}

void    FragTrap::attack(const std::string &target)
{
    if (check_healt())
    {
        std::cout<<"FragTrap " + _name + " attacks " + target;
        std::cout<<", causing "<<_attack_damage<<" point of damage!"<<std::endl;
        _attack_damage -= 1;
    }
}

void    FragTrap::highFivesGuys()
{
    std::cout<<this->_name + " is up hand to high Fives"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap Default Desctrutor called"<<std::endl;
}