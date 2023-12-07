#include "replace.hpp"


sed::sed(std::string s1, std::string s2, std::string filename)
{
    this->_s1 = s1;
    this->_s2 = s2;
    this->_filename = filename;
}

std::string    sed::getfilename()
{
    std::string file;
    int len = _filename.find('.');
    file = _filename.substr(0, len);
    return (file + ".replace");
}

std::string sed::getfirststring()
{
    return(this->_s1);
}

std::string sed::getsecondstring()
{
    return(this->_s2);
}

std::string sed::replacestring(std::string   str, const std::string  s1, const std::string  s2)
{
    std::string returnString;
    int i = 0;
    while(str[i])
    {
        if (!s1.empty() && str.substr(i, s1.length()) == s1)
        {
            returnString += s2;
            i += s1.length();
        }
        else
        {
            returnString += str[i];
            i++;
        }
    }
    return (returnString);
}