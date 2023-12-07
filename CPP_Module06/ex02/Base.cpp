#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int get_nb()
{
    std::srand(std::time(NULL));
    int random = std::rand() % 3;
    return (random);
}

Base::~Base()
{

}
Base *generete(void)
{

    switch (get_nb())
    {
    case 0 :
        std::cout<<"generate A"<<std::endl;
        return (new A);
        break;
    case 1 :
        std::cout<<"generate B"<<std::endl;
        return (new B);
        break;
    case 2:
        std::cout<<"generate C"<<std::endl;
        return (new C);
        break;
    }
    return (NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
    else
        std::cerr<<"Name Not Found"<<std::endl;
}

void    identify(Base &p)
{
    try 
    {
        A a = dynamic_cast<A &>(p);
        std::cout<<"A"<<std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            std::cout<<"B"<<std::endl;
        }
        catch(const std::exception& e)
        {
          try
          {
            C c = dynamic_cast<C &>(p);
            std::cout<<"C"<<std::endl;
          }
          catch(const std::exception &e)
          {
            std::cerr<<"Not Found"<<std::endl;
          }
        }
    }
}