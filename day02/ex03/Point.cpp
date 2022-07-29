#include "Point.hpp"

Point::Point(void)
{ }

Point::Point(const Fixed &_x, const Fixed &_y)
: x(_x), y(_y)
{ }

Point::Point(const Point &obj)
{
    *this = obj;
}

Point::~Point(void)
{ }

Point   &Point::operator=(const Point &obj)
{
    x = obj.x;
    y = obj.y;
    return *this;
}

Point   Point::operator-(const Point &obj) const
{
    return Point(x - obj.x, y - obj.y);
}

Point   Point::operator+(const Point &obj) const
{
    return Point(x + obj.x, y + obj.y);
}

bool    Point::checkLine(const Point &p1, const Point &p2, const Point &p3) const
{
    Fixed   one = (p1.x - x) * (p2.y - p1.y) - (p2.x - p1.x) * (p1.y - y);
    Fixed   two = (p2.x - x) * (p3.y - p2.y) - (p3.x - p2.x) * (p2.y - y);
    Fixed   three = (p3.x - x) * (p1.y - p3.y) - (p1.x - p3.x) * (p3.y - y);

    if ((one > 0 && two > 0 && three > 0) || (one < 0 && two < 0 && three < 0))
        return 1;
    if (one == 0 || two == 0 || three == 0)
        return 1;
    return 0;
}

