#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat"

class   Form
{
    class GradeToohighException : public std::exception
    {
        const char * what() const throw();
    };
    class   GradetoolowException : public std::exception
    {
        const char * what() const throw();
    };
    private :
        const std::string _name;
        bool    _is_signed;
        const int _grade_required;
        const int _grade_execute;
    public:
        Form();
        std::stirng get_name();
        bool    get_signed();
        int     get_required_grade();
        int     get_ex_garde();
        void    beSigned(Bureaucrat obj);
}
# endif