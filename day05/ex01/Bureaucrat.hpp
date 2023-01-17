#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
        Bureaucrat(std::string name, int grade);
        std::string get_Name() const ;
        void         decremnt_grade();
        void         increment_garde();
        int         get_Grade() const;
        void        singFrom();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);
#endif