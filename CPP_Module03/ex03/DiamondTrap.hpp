#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class   DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string _name;
    public:
     DiamondTrap();
     DiamondTrap(std::string name);
     DiamondTrap(const DiamondTrap & op);
     DiamondTrap &operator=(const DiamondTrap &op);
     void    attack(const std::string &target);
     void   whoAmI();
     ~DiamondTrap();
 };
#endif