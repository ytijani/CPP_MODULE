#include "Intern.hpp"


Intern::Intern()
{

}

Intern::Intern(const Intern &obj)
{
    *this = obj;
}

Intern Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

const char *Intern::NameNotFound::what() const throw()
{
    return ("name doesn't exist");
}

Form *Intern::rrf(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

Form *Intern::ppf(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::scf(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeForm(std::string name, std::string const &target)
{
    Form* (Intern::*ptr[3])(std::string const &target) = {&Intern::rrf, &Intern::ppf, &Intern::scf};
    std::string str[] = {"robotomy request", " pardoned","ASCII trees"};
    for(int i = 0; i < 3; i++)
    {
        if (str[i] == name)
        {   
            std::cout<<"Intern creates "<<name<<std::endl;
            return ((this->*(ptr[i]))(target));
        }
    }
    throw Intern::NameNotFound();
}
