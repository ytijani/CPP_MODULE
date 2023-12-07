#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap op3("youssef");

    std::cout<<"*****************target2*******************"<<std::endl;
    std::cout<<"Name : "<<op3.get_name()<<std::endl;
    std::cout<<"Hitpoint : "<<op3.get_hitpoint()<<std::endl;
    std::cout<<"Energy_point : "<<op3.get_egy_point()<<std::endl;
    std::cout<<"Attack_damage : "<<op3.get_ad()<<std::endl<<std::endl;

    op3.attack("lolo");
    op3.takeDamge(5);
    op3.whoAmI();
    op3.beRepaired(10);
    op3.attack("koko");
    op3.highFivesGuys();
    op3.takeDamge(3);
    op3.attack("bobobo");
}