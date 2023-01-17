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
        int         decremnt_i();
        int         increment_i();
        int         get_Grade() const;
};

std::ostream &operator<<(const std::ostream &out, const Bureaucrat &obj);
#endif