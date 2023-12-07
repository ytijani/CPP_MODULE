# ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat;
class RobotomyRequestForm : public Form
{
    private :
        std::string _target;
    public :
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm & operator=(const RobotomyRequestForm &);
    void    execute(Bureaucrat const & executor) const;
    ~RobotomyRequestForm();
};

# endif