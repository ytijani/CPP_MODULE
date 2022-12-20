#ifndef WEAPON_HPP
# define WEAPON_HPP

# include<iostream>

class Weapon
{
private:
    std::string _name;
public :
    Weapon(std::string name);
    const   std::string & getType();
    void    setType(std::string name);
};

#endif 