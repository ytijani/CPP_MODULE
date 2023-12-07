#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        Span ok(sp);
        std::cout<<"****************CONTAINER VALUE***************"<<std::endl;
        sp.print();
        std::cout<<"****************END***************"<<std::endl;

        std::cout<<sp.shortestSpan()<<std::endl;
        std::cout<<sp.longestSpan()<<std::endl;
        std::cout<<"**********copy*********"<<std::endl;
        std::cout<<ok.shortestSpan()<<std::endl;
        std::cout<<ok.longestSpan()<<std::endl;
    }
    catch(const char *str)
    {
        std::cerr << str << '\n';
    }
    

    // try
    // {
    //     Span Sp = Span(10000);

    //     Sp.addAllNumber(10000);
    //     std::cout<<Sp.shortestSpan()<<std::endl;
    //     std::cout<<Sp.longestSpan()<<std::endl;
    // }
    // catch(const char *str)
    // {
    //     std::cerr << str << '\n';
    // }

}