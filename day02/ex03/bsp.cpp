#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())/ 2;
    // std::cout<<a.get_x()<<std::endl;
    // std::cout << "area = " << area << std::endl;
    Fixed t1 = point.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - point.get_y()) + c.get_x() * (a.get_y() - b.get_y()) / 2;
    Fixed t2 = a.get_x() *(point.get_y() - c.get_y()) + point.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - point.get_y()) / 2;
    Fixed t3 = a.get_x() *(b.get_y() - point.get_y()) + b.get_x() * (point.get_y() - a.get_y()) + point.get_x() * (a.get_y() - b.get_y()) / 2;
    if (t1 + t2 + t3 == area)
        return (true);
    return(false);
}