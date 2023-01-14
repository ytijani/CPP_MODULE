#include "Point.hpp"

Fixed   get_area(Fixed ax, Fixed ay, Fixed bx, Fixed by, Fixed cx, Fixed cy)
{
    return ((ax * (by - cy) + bx * (cy - ay) + cx *(ay - by) )/ 2);
}

Fixed   abs_fixed(Fixed x)
{
    if (x < 0)
        x  = x * -1;
    return (x);
}

bool    check_point(Point const a, Point const b, Point const c, Point const point)
{
    if (check_inside(a, b,point) && check_inside(a, c, point), check_inside(b, c, point))
        return(false);
    return (true);
}

bool    check_inside(Point const a, Point const b,Point const point)
{
    //y = mx + p;
    Fixed m = (b.get_y() - a.get_y()) /  (b.get_x() - a.get_x());
    Fixed p = (m * a.get_x() - a.get_y()) * -1;
    Fixed f = m * point.get_x() + p;
    if (f == point.get_y())
        return (true);
    return (false);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed area = abs_fixed(get_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y()));
    Fixed t1 = abs_fixed(get_area(point.get_x(), point.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y()));
    Fixed t2 = abs_fixed(get_area(a.get_x(), a.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y()));
    Fixed t3 = abs_fixed(get_area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), point.get_x(), point.get_y()));
    if (t1 + t2 + t3 == area && check_point(a, b, c, point))
        return (true);
    return(false);
}