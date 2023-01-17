#include "Bureaucrat.hpp"


int main()
{

    try
    {
        Bureaucrat a("lolo", 200);
        std::cout<<a.get_Name()<<std::endl;
        std::cout<<a.get_Grade()<<std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr<<e.what()<<std::endl;
    }
}