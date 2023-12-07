#include "Form.hpp"

Form::Form():_grade_required(0),_grade_execute(0)
{
    std::cout<<"Form Default constructor called"<<std::endl;
    this->_is_signed = false;
}

Form::Form(int rtograde, int etograde):_grade_required(rtograde), _grade_execute(etograde)
{
     std::cout<<"Form constructor called"<<std::endl;
}
Form::Form(const Form &obj):_name(obj._name), _grade_required(obj._grade_required),_grade_execute(obj._grade_execute)
{
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
        this->_is_signed = obj._is_signed;
    return (*this);
}

Form::Form(std::string name,  int rtograde, int etograde):_name(name),
_grade_required(rtograde),_grade_execute(etograde)
{
    this->_is_signed = false;
    if (this->_grade_required < 1 || this->_grade_execute < 1)
        throw GradeToohighException();
    if (this->_grade_required > 150 || this->_grade_execute > 150)
        throw GradetoolowException();
}

const char * Form::GradeToohighException::what() const throw()
{
    return ("you grade is to high");
}
const char * Form::GradetoolowException::what() const throw()
{
    return ("your grade is too low");
}

const char * Form::NotSign::what() const throw()
{
    return ("not signed");
}

void    Form::beSigned(Bureaucrat &obj)
{
    if (obj.get_Grade() > this->_grade_required)
        throw GradetoolowException();
    _is_signed = true;
}

void    Form::check_gradetoexec(Bureaucrat const &obj) const
{
    if ((obj.get_Grade() > this->_grade_execute) || (this->_is_signed == false))
    {
        if (obj.get_Grade() > this->_grade_execute)
            throw GradetoolowException();
        else
            throw NotSign();
    }
}

std::string Form::get_Name() const
{
    return (this->_name);
}

bool    Form::get_signed() const 
{
    return (this->_is_signed);
}

int     Form::get_required_grade() const
{
    return (this->_grade_required);
}

int     Form::get_ex_garde() const
{
    return (this->_grade_execute);
}

std::ostream &operator<<(std::ostream &out, const Form &obj)
{
    if (obj.get_signed())
        out<<obj.get_Name() + " required grade " <<obj.get_required_grade()<< " and execute "<<obj.get_ex_garde()<<" is signed"<<std::endl;
    else
        out<<obj.get_Name() + " required grade " <<obj.get_required_grade()<< " and execute "<<obj.get_ex_garde()<<" not signed"<<std::endl;
    return (out);
}

Form::~Form()
{
    std::cout<<"Form destructor called"<<std::endl;
}
