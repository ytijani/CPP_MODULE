#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    A * p = new A;
    identify(p);
    identify(*p);
    delete p;
    std::cout<<std::endl;
    B * b = new B;
    identify(b);
    identify(*b);
    delete b;
    std::cout<<std::endl;
    Base *base =  generete();
    identify(base);
    identify(*base);
    delete base;
    std::cout<<std::endl;
    Base * t = new Base;
    identify(t);
    identify(*t);
    delete t;
    
}
