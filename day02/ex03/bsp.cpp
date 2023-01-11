#include "Point.hpp"

Fixed   get_area(Fixed ax, Fixed ay, Fixed bx, Fixed by, Fixed cx, Fixed cy)
{
    return ((ax * (by - cy) + bx * (cy - ay) + cx *(ay - by) )/ 2);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = get_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
    Fixed t1 = get_area(point.get_x(), point.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
    Fixed t2 = get_area(a.get_x(), b.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y());
    Fixed t3 = get_area(a.get_x(), b.get_y(), b.get_x(), b.get_y(), point.get_x(), point.get_y());
    if ((t1 + t2 + t3) == area)
        return (true);
    return(false);
}