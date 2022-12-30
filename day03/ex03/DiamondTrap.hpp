#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   DiamodTrap : public ScavTrap , public FragTrap
{
    private:
        std::string name;
    
};

#endif