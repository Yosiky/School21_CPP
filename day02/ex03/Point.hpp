#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class   Point
{
private:
    Fixed   x;
    Fixed   y;

public:    
    Point(void);
    Point(const Fixed &_x, const Fixed &_y);
    Point(const Point &obj);
    ~Point(void);

    Point   &operator=(const Point &obj);
    Point   operator+(const Point &obj) const;
    Point   operator-(const Point &obj) const;

    float   checkLine(const Point &a, const Point &b) const;
    const Fixed &getX(void) const;
    const Fixed &getY(void) const;
};

std::ostream    &operator<<(std::ostream &out, const Point &obj);

#endif //POINT_HPP
