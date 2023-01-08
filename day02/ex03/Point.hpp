#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed  const x;
    Fixed  const y;
public:
    Point();
    Point(const float a, const float b);
    Point(const Point &op);
    Point &operator=(const Point &op) const;
    ~Point();
};


#endif