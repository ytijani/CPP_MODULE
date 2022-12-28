#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class   sed
{
    private:
        std::string _s2;
        std::string _s1;
        std::string _filename;
    public :
        sed(std::string s1, std::string s2, std::string filename);
        std::string getfilename();
        std::string getfirststring();
        std::string getsecondstring();
        void    replacestring(std::string & str, const std::string & s1, const std::string & s2);
};

# endif