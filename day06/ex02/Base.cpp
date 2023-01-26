#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

A::~A()
{
    
}

B::~B()
{
    
}

C::~C()
{
    
}

int get_nb()
{
    srand(time(NULL));
    int random = std::rand() % 2;
    return (random);
}

Base *generete(void)
{
    A *ins1 = new A;
    B *ins2 =  new B;
    C *ins3 = new C;

    switch (get_nb())
    {
    case 0 :
        return (dynamic_cast<Base *>(ins1));
        break;
    case 1 :
        return (dynamic_cast<Base *>(ins2));
        break;
    case 2:
        return (dynamic_cast<Base *>(ins3));
        break;
    }
    return (NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    if (dynamic_cast<C*>(p))
        std::cout<<"B"<<std::endl;
    else
        std::cout<<"Not Found"<<std::endl;
}

// void    identify(Base &p)
// {
//     (void)p;
// }