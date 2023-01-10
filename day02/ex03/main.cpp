#include "Point.hpp"

int  main()
{
    Point const a(10,10);
    Point const b(5,5);
    Point const c(10,5);
    Point const d(15, 15);
    if (bsp(a, b, c, d))
        std::cout<<"inside"<<std::endl;
    else
        std::cout<<"not inside"<<std::endl;
}