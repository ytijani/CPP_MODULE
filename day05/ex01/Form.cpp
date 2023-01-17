#include "Form.hpp"

Form::Form():_grade_required(0),_grade_execute(0)
{
    this->_is_signed = false;
}

Form::Form(std::string name, bool sign, int rtograde, int etograde):_name(name),_is_signed(sign),
_grade_required(rtograde),_grade_execute(etograde)
{
    if (this->_grade_required <= 1 || this->_grade_execute <= 1)
        throw GradeToohighException();
    if (this->_grade_required >= 150 || this->_grade_execute >= 150)
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

void    Form::beSigned(Bureaucrat &obj)
{
    if (obj.get_Grade() <= this->_grade_required)
        throw GradetoolowException();
    _is_signed = true;
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
    out<<obj.get_Name() + "required grade " <<obj.get_required_grade()<< "and execute "<<obj.get_ex_garde()<<obj.get_signed()<<std::endl;
    return (out);
}
