#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
class   Base
{
    public:
        virtual ~Base();
};

Base *generete(void);
void identify(Base* p);
void identify(Base& p);
int get_nb(void);
#endif