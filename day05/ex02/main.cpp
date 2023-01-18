#include "Bureaucrat.hpp"


int main()
{

    try
    {
        Bureaucrat a("youssef", 10);
        Form b("the form", 4, 8);
        b.beSigned(a);
        a.singFrom(b);
    }
    catch(std::exception & e)
    {
        std::cout<<e.what()<<std::endl;
    }
}