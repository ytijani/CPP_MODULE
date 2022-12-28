#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const float a, const float b);
    Point(const Point &op);
    Point &operator=(const Point &op);
    ~Point();
};


#endif