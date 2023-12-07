#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *Weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        void    attack();
        void    setWeapon(::Weapon &We);
};
#endif