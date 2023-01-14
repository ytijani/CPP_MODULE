#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
    std::cout<<"DiamodTrap Defaults Constructor Called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_Hitpoint = FragTrap::_Hitpoint;
    this->_Energy_point = ScavTrap::_Energy_point;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "Hit Points : " <<  _Hitpoint << std::endl;
    std::cout << " _Energy_point : " <<  _Energy_point << std::endl;
    std::cout << "_attack_damage : " <<  _attack_damage << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout<<this->_name + "its " + ClapTrap::_name <<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &op)
{
    std::cout<<"copy constructor called"<<std::endl;
    *this = op;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & op)
{
      this->_attack_damage = op._attack_damage;
      this->_Energy_point  = op._Energy_point;
      this->_Hitpoint = op._Hitpoint;
      return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"Diamond Desctructor called"<<std::endl;
}