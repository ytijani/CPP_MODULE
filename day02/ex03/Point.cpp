#include "Point.hpp"


Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point &Point::operator=(const Point &op)
{
    this->x = op.getRawBits();
    this->y = op.getRawBits();
    return (*this);
}
