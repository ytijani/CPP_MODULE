#include "Point.hpp"

Point::Point() : x(0),y(0){}

Point::Point(const Point &op)
{
    *this = op;
}

Point &Point::operator=(const Point &op)
{
    (void)op;
    // this->x = op.x;
    // this->y = op.y;
    return (*this);
}

Fixed   Point::get_x() const
{
    return (x.toFloat());
}

Fixed   Point::get_y() const
{
    return (y);
}

Point::Point(const float a, const float b): x(a), y(b) {}

Point::~Point()
{
}
