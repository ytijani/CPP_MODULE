#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & op);
        ScavTrap &operator=(ScavTrap const &op);
        void   attack(const std::string &target);
        ~ScavTrap();
        void    guardGate();
};

#endif