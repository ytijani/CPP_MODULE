#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"ClapTrap Default Constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout<<"ClapTrap Constructor Called"<<std::endl;
    this->_name = Name;
    this->_Hitpoint = 10;
    this->_attack_damage = 0;
    this->_Energy_point = 10;
}

ClapTrap::ClapTrap(const ClapTrap &op)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = op;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & op)
{
      this->_attack_damage = op._attack_damage;
      this->_Energy_point  = op._Energy_point;
      this->_Hitpoint = op._Hitpoint;
      return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (check_healt())
    {
        std::cout<<"ClapTrap " + _name + " attacks " + target;
        std::cout<<", causing "<<_attack_damage<<" point of damage!"<<std::endl;
        _attack_damage -= 1;
    }
}

void    ClapTrap::takeDamge(unsigned int amount)
{
    if (check_healt())
    {
        std::cout<<_name + " takedamge "<<std::endl;
        _Hitpoint -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (check_healt())
    {
         std::cout<<_name + " be Repaired "<<std::endl;
        _attack_damage -= 1;
        _Hitpoint += amount;
    }
}

int ClapTrap::check_healt()
{
    if (_Hitpoint <= 0)
    {
        std::cout<<"ClapTrap can't do enything cause hit points left"<<std::endl;
        return (0);
    }
    if (_Energy_point <= 0)
    {
        std::cout<<"ClapTrap can't do enything cause Energy pints left"<<std::endl;
        return (0);
    }
    return (1);
}

std::string ClapTrap::get_name()
{
    return (this->_name);
}

void    ClapTrap::set_ad(int i)
{
    this->_attack_damage = i;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Desctructor Called"<<std::endl;
}