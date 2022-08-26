#include "Point.hpp"

Point::Point(void) { }

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
    return Point(x - obj.x, y - obj.y); }

Point   Point::operator+(const Point &obj) const
{
    return Point(x + obj.x, y + obj.y);
}

float   Point::checkLine(const Point &p1, const Point &p2) const
{
    return ((p1.x - x) * (p2.y - p1.y) - (p2.x - p1.x) * (p1.y - y)).toFloat();
}

const Fixed &Point::getX(void) const
{
    return x;
}

const Fixed &Point::getY(void) const
{
    return y;
}

std::ostream    &operator<<(std::ostream &out, const Point &obj)
{
    out << obj.getX() << ' ' << obj.getY();
    return out;
}
