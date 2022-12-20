#include "replace.hpp"


sed::sed(std::string s1, std::string s2, std::string filename)
{
    this->_s1 = s1;
    this->_s2 = s2;
    this->_filename = filename;
}

std::string    sed::getfilename()
{
    return (this->_filename);
}

std::string sed::getfirststring()
{
    return(this->_s1);
}

std::string sed::getsecondstring()
{
    return(this->_s2);
}

void    sed::replacestring(std::string  & str, std::string & s1, std::string & s2)
{
    int fspace = 0;
    size_t found = str.find(s1.c_str());
    if (found != std::string::npos)
    {
        std::cout<<s2.length()<<std::endl; 
        for(int i  = 0; i < (int)s2.length(); i++)
        {
            if (str[found + (int)s2.length() - 1] == ' ')
                fspace = 1;
            str[found] = s2[i];
            found++;
        }
        if (fspace == 1)
            str[found] = ' ';
    }
}