#include "Bureaucrat.hpp"


int main()
{
    int var;
    std::string name;
    try
    {
        std::cin>>name;
        std::cin>>var;
        Bureaucrat a(name , var);
        std::cout<<a;
    }
    catch(std::exception& e)
    {
        std::cerr<<e.what()<<std::endl;
    }
    // try
    // {
    //     std::cin>>name;
    //     std::cin>>var;
    //     Bureaucrat a(name , var);
    //     a.increment_garde();
    //     std::cout<<a;
    // }
    // catch(std::exception& e)
    // {
    //     std::cerr<<e.what()<<std::endl;
    // }
    // try
    // {
    //     std::cin>>name;
    //     std::cin>>var;
    //     Bureaucrat a(name , var);
    //     a.decremnt_grade();
    //     std::cout<<a;
    // }
    // catch(std::exception& e)
    // {
    //     std::cerr<<e.what()<<std::endl;
    // }
}