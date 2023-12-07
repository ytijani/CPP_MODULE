#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout<<"DiamodTrap Defaults Constructor Called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ScavTrap(name),FragTrap(name)
{
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_Hitpoint = FragTrap::_Hitpoint;
    this->_Energy_point = 50;
    this->_attack_damage = FragTrap::_attack_damage;
}

void    DiamondTrap::whoAmI()
{
    std::cout<<this->_name + " its " + ClapTrap::_name <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &op)
{
    std::cout<<"DiamondTrapcopy constructor called"<<std::endl;
    *this = op;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & op)
{
    this->_name = op._name;
    ClapTrap::_name = this->_name + " _clap_name";
    this->_attack_damage = op._attack_damage;
    this->_Energy_point  = op._Energy_point;
    this->_Hitpoint = op._Hitpoint;
    return (*this);
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"Diamond Desctructor called"<<std::endl;
}