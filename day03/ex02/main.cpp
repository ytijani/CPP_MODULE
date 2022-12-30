#include "ScavTrap.hpp"


int main()
{
    ClapTrap op("youssef");
    ScavTrap op1("lolo");

    op.set_ad(5);
    op1.attack(op.get_name());
    op.beRepaired(3);
    op.takeDamge(4);
    op1.beRepaired(2);
    op1.attack(op.get_name());
    op.attack(op.get_name());
}