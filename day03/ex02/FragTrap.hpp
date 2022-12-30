#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &op);
        FragTrap &operator=(FragTrap const &op);
        void    attack(const std::string &target);
        void    highFivesGuys();
        ~FragTrap();
};
#endif