#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat a("youssef", 19);
        Form b("the form", 20, 8);
        a.singFrom(b);
    }
    catch(std::exception & e)
    {
        std::cout<<e.what()<<std::endl;
    }
}