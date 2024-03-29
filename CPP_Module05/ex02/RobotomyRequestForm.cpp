#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequest",72, 45)
{
    std::cout<<"RobotomyRequestForm Default constructor called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequest", 72, 45), _target(target)
{
    std::cout<<"RobotomyRequestForm constructor called"<<std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj):Form("RobotomyRequest", 72, 45)
{
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    check_gradetoexec(executor);
    std::srand(time(NULL));
    int i = std::rand() % 2;
    if (i == 0)
        std::cout<<this->_target + " has been robotomized successfully "<<std::endl;
     else
        std::cout<<this->_target + " robotomy failed"<<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"RobotomyRequestForm destructor called"<<std::endl;
}