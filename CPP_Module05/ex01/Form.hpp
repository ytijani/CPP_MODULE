#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
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
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        Form(std::string name, int rtograde, int etograde);
        std::string get_Name() const;
        bool    get_signed() const;
        int     get_required_grade() const;
        int     get_ex_garde() const;
        void    beSigned(Bureaucrat &obj);
        ~Form();
};
std::ostream &operator<<( std::ostream &out, const Form &obj);
# endif