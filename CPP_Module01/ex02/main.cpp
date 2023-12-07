#include <iostream>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string &stringREF = name;

    std::cout<<"memory address of string variable :"<<&name<<std::endl;
    std::cout<<"memory address of string PTR :" <<stringPTR<<std::endl;
    std::cout<<"memory address of string REF :"<<&stringREF<<std::endl;

    std::cout<<"The value of the string variable :"<<name<<std::endl;
    std::cout<<"The value pointed to by stringPTR :" <<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF :"<<stringREF<<std::endl;
}