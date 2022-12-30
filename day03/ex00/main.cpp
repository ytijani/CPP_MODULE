#include "ClapTrap.hpp"


int main()
{
    ClapTrap op("target1");
    ClapTrap op1("target2");

    op.set_ad(10);
    op1.set_ad(5);
    op.attack(op1.get_name());
    op.beRepaired(5);
    op1.attack(op.get_name());
    op1.attack(op.get_name());
    op1.beRepaired(3);
    op1.attack(op.get_name());
    op1.takeDamge(13);
    op1.attack(op.get_name());
}