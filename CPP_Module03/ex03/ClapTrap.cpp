#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"Default Constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"Constructor called"<<std::endl;
    this->_name = name;
    this->_Hitpoint = 10;
    this->_Energy_point = 10;
    this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &op)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = op;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & op)
{
     std::cout<<"copy assignment called"<<std::endl;
      this->_name = op._name;
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
        _Energy_point -= 1;
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
        _Energy_point -= 1;
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

int         ClapTrap::get_hitpoint()
{
    return (this->_Hitpoint);
}

int         ClapTrap::get_egy_point()
{
    return (this->_Energy_point);
}

int         ClapTrap::get_ad()
{
    return (this->_attack_damage);    
}

std::string ClapTrap::get_name()
{
    return (this->_name);
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Desctructor called"<<std::endl;
}