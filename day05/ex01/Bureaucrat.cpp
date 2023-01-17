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
    return ("you grade is to high");
}
const char * Bureaucrat::GradetoolowException::what() const throw()
{
    return ("your grade is too low");
}

void        Bureaucrat::singFrom(Form &obj)
{
    if (_is_signed)
        std::cout<<this->_name + "signed" + obj._name<<std::endl;
}

void   Bureaucrat::decremnt_grade()
{
    if (this->_grade != 150)
        this->_grade++;
}

void Bureaucrat::increment_garde()
{
    if (this->_grade != 1)
        this->_grade--;
}

std::string Bureaucrat::get_Name() const
{
    return(this->_name);
}

int     Bureaucrat::get_Grade() const
{
    return (this->_grade);
}

std::ostream &operator<<( std::ostream &out, const Bureaucrat &obj)
{
    out<<obj.get_Name() + " ,bureaucrat grade "<<obj.get_Grade()<<std::endl;
    return (out);
}
