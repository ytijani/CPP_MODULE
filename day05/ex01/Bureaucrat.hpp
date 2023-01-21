#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"
class Form;
class   Bureaucrat
{
    class GradeToohighException : public std::exception
    {
        const char * what() const throw();
    };
    class   GradetoolowException : public std::exception
    {
        const char * what() const throw();
    };
    private:
        const std::string  _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator= (const Bureaucrat &obj);
        Bureaucrat(std::string name, int grade);
        std::string get_Name() const ;
        void         decrement_grade();
        void         increment_garde();
        int         get_Grade() const;
        void        singFrom(Form &obj);
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);
#endif