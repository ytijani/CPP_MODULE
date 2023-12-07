#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class   Intern
{
    private:
        Form *rrf(std::string const &target);
        Form *ppf(std::string const &target);
        Form *scf(std::string const &target);
    public:
        Intern();
        Intern(const Intern &);
        Intern operator=(const Intern &);
        Form *makeForm(std::string name, std::string const &target);
        ~Intern();
};
#endif