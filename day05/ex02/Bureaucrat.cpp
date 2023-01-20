#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
     std::cout<<"Bureaucrat Default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name), _grade(grade)
{    
    std::cout<<"Bureaucrat constructor called"<<std::endl;
    if(this->_grade <= 0)
        throw GradeToohighException();
    if (this->_grade > 150)
        throw GradetoolowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &obj)
{
    if (this != &obj)
        this->_grade = obj._grade;
    return (*this);
}

const char * Bureaucrat::GradeToohighException::what() const throw()
{
    return ("you grade is to high");
}
const char * Bureaucrat::GradetoolowException::what() const throw()
{
    return ("your grade is too low");
}

void        Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout<<this->_name + " signed " + obj.get_Name()<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<this->_name + " couldn’t sign " + obj.get_Name() +
        "because "<<e.what()<<std::endl;
    }
}

void   Bureaucrat::decrement_grade()
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

void    Bureaucrat::executeForm(Form const & aform)
{
    try
    {
        aform.execute(*this);
        std::cout<<this->_name + " executed"<<aform.get_Name()<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<<this->_name + " couldn't execute " + aform.get_Name() +
        "because " << e.what()<<std::endl;
    }
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

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}