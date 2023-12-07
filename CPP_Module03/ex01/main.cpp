#include "ScavTrap.hpp"


int main()
{
    ClapTrap op("calp_target");
    ScavTrap op1("scav_target");

 //************target1************//
    std::cout<<"*****************target1*******************"<<std::endl;
    std::cout<<"Name : "<<op.get_name()<<std::endl;
    std::cout<<"Hitpoint : "<<op.get_hitpoint()<<std::endl;
    std::cout<<"Energy_point : "<<op.get_egy_point()<<std::endl;
    std::cout<<"Attack_damage : "<<op.get_ad()<<std::endl;
    //***********target 2**************//
    std::cout<<"*****************target2*******************"<<std::endl;
    std::cout<<"Name : "<<op1.get_name()<<std::endl;
    std::cout<<"Hitpoint : "<<op1.get_hitpoint()<<std::endl;
    std::cout<<"Energy_point : "<<op1.get_egy_point()<<std::endl;
    std::cout<<"Attack_damage : "<<op1.get_ad()<<std::endl<<std::endl;

    op.attack(op1.get_name());
    op1.guardGate();
    op1.takeDamge(40);
    op1.attack(op.get_name());
    op.takeDamge(3);
    op.beRepaired(10);
    op.attack(op1.get_name());
    op1.takeDamge(40);
    op1.guardGate();
    op1.attack(op.get_name());
    op.takeDamge(40);
    op.attack(op.get_name());
}