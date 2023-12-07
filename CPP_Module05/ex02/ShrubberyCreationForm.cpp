#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreation",145, 137)
{
    std::cout<<"ShrubberyCreationForm Default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation",145, 137), _target(target)
{
    std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):Form("ShrubberyCreation",145, 137)
{
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}

const char *ShrubberyCreationForm::FileError::what() const throw()
{
    return ("error file");
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    check_gradetoexec(executor);
    std::ofstream outfile;

    outfile.open(this->_target + "_shrubbery");
    if (!outfile)
        throw FileError();
     outfile <<"     .       .      .    #       .           ."<<std::endl;
    outfile << "        .      .        ###            .      .      ."<<std::endl;
    outfile <<"      .     #:.        .####:.        .:#  .      ."<<std::endl;
    outfile <<"                    #############            "<<std::endl;
    outfile <<"            #:.      .:########:.       .:#                 "<<std::endl;
    outfile <<"                  ###################            "<<std::endl;
    outfile <<"           #:.  #######################    .:#                  "<<std::endl;
    outfile <<"               #######""#######""######                   "<<std::endl;
    outfile <<"                   #################                                        "<<std::endl;
    outfile <<"                 #####################                            "<<std::endl;
    outfile <<"             #############################                              "<<std::endl;
    outfile <<"                 ####""#######""#####                        "<<std::endl;
    outfile <<"         .      .         ###            .      .      ."<<std::endl;
    outfile <<"         .      .         ###            .      .      ."<<std::endl;
    outfile <<"         .      .         ###            .      .      ."<<std::endl;
    outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"ShrubberyCreationForm Destructor called"<<std::endl;
}