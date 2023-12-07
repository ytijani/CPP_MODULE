#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
    class FileError : std::exception
    {
        const char *what() const throw();
    };
    private :
        std::string _target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
        void    execute(Bureaucrat const & executor) const;
        ~ShrubberyCreationForm();
};

#endif