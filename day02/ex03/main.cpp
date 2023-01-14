#include "Point.hpp"

int  main()
{
    Point const a(0, 0);
    Point const b(20, 0);
    Point const c(10, 30);
    Point const d(10,  15);
    if (bsp(a, b, c, d))
         std::cout<<"inside"<<std::endl;
    else
        std::cout<<"not inside"<<std::endl;
}