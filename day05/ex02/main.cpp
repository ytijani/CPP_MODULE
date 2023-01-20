#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat obj1("teek", 10);
    RobotomyRequestForm ob("lolo");
    ShrubberyCreationForm ob1("teek");
    PresidentialPardonForm ob2("youssef");

    obj1.signForm(ob);
    obj1.executeForm(ob);
    std::cout<<std::endl;
    obj1.signForm(ob1);
    obj1.executeForm(ob1);
    std::cout<<std::endl;
    obj1.signForm(ob2);
    obj1.executeForm(ob2);

}