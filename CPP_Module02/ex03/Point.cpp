#include "Point.hpp"

Point::Point() : x(0),y(0){}

Point::Point(const Point &op) : x(op.x), y(op.y)
{
}

Point &Point::operator=(const Point &op)
{
    (void)op;
    return (*this);
}

Fixed   Point::get_x() const
{
    return (x);
}

Fixed   Point::get_y() const
{
    return (y);
}

Point::Point(const float a, const float b): x(a), y(b) {
}

Point::~Point()
{
}
