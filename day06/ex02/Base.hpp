#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class   Base
{
    public:
        virtual ~Base();
};

Base *generete(void);
void identify(Base* p);
// void identify(Base& p);
int get_nb(void);
#endif