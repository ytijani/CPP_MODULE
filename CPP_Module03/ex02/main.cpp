#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap op("clap_target");
    ScavTrap op1("scav_target");
    FragTrap op2("frag_target");

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
     //***********target 3**************//
    std::cout<<"*****************target2*******************"<<std::endl;
    std::cout<<"Name : "<<op2.get_name()<<std::endl;
    std::cout<<"Hitpoint : "<<op2.get_hitpoint()<<std::endl;
    std::cout<<"Energy_point : "<<op2.get_egy_point()<<std::endl;
    std::cout<<"Attack_damage : "<<op2.get_ad()<<std::endl<<std::endl;

    op.attack(op1.get_name());
    op1.guardGate();
    op1.takeDamge(40);
    op1.attack(op.get_name());
    op.takeDamge(3);
    op.beRepaired(10);
    op1.attack(op2.get_name());
    op2.takeDamge(3);
    op2.beRepaired(4);
    op2.highFivesGuys();
    op.attack(op1.get_name());
    op1.takeDamge(40);
    op1.guardGate();
    op1.attack(op.get_name());
    op.takeDamge(40);
    op.attack(op.get_name());


}