#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private :
        std::string _name;
        int     _Hitpoint;
        int     _Energy_point;
        int     _attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap & op);
        ClapTrap &operator= (ClapTrap const & op);
        void    attack(const std::string &target);
        void    takeDamge(unsigned int amount);
        void    beRepaired(unsigned int amount);

        int check_healt();
        void    set_ad(int i);
        std::string get_name();
        ~ClapTrap();
};

#endif