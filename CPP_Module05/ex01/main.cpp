#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat a("youssef", 10);
        Form b("the form", 20, 8);
        a.singFrom(b);
        std::cout<<b;
    }
    catch(std::exception & e)
    {
        std::cerr<<e.what()<<std::endl;
    }
}