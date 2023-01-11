#include "Point.hpp"

int  main()
{
    point a(10, 20);
    
    if (bsp(Point(10,10), Point(5, 5), Point(10, 5), Point(15,15)))
         std::cout<<"inside"<<std::endl;
    else
        std::cout<<"not inside"<<std::endl;
}