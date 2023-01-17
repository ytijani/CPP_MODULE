#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{
    if(this->_grade <= 0)
        throw GradeToohighException();
    if (this->_grade > 150)
        throw GradetoolowException();
}

const char * Bureaucrat::GradeToohighException::what() const throw()
{
    return ("Grad is higher");
}
const char * Bureaucrat::GradetoolowException::what() const throw()
{
    return ("Grad is low");
}

int Bureaucrat::decremnt_i()
{
    this->_grade--;
    return(this->_grade);
}

int Bureaucrat::increment_i()
{
    this->_grade++;
    return(this->_grade);
}