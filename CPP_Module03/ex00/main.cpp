#include "ClapTrap.hpp"

int main()
{
    ClapTrap op("target1");
    ClapTrap op1("target2");

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
    op.beRepaired(5);
    op1.attack(op.get_name());
    op1.attack(op.get_name());
    op1.beRepaired(3);
    op1.attack(op.get_name());
    op1.takeDamge(13);
    op1.attack(op.get_name());
}