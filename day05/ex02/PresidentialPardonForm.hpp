#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;
class PresidentialPardonForm : public Form
{
    private :
        std::string _target;
    public :
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm & operator=(const PresidentialPardonForm &);
    void    execute(Bureaucrat const & executor) const;
    ~PresidentialPardonForm();
};

#endif