#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardon",25, 5)
{
    std::cout<<"PresidentialPardonForm Default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("PresidentialPardon",25, 5), _target(target)
{
    std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj):Form("PresidentialPardon",25, 5)
{
    *this = obj; 
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}


void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    check_gradetoexec(executor);
    std::cout<<this->_target + " has been pardoned by Zaphod Beeblebrox"<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout<<"PresidentialPardonForm Destructor called"<<std::endl;
}