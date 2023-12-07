#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj1("teek",3);
        RobotomyRequestForm ob("lolo");
        ShrubberyCreationForm ob1("teek");
        PresidentialPardonForm ob2("youssef");

        std::cout<<std::endl;
        obj1.signForm(ob);
        obj1.executeForm(ob);
        obj1.signForm(ob1);
        obj1.executeForm(ob1);
        obj1.signForm(ob2);
        obj1.executeForm(ob2);
        std::cout<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}