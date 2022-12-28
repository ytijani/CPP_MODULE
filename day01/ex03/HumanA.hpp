#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *Weapon1;
        std::string _name;
    public:
        void    attack();
        HumanA(std::string name, Weapon  weapon);
};

#endif