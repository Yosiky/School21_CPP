#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    int f1 = point.checkLine(a, b);
    int f2 = point.checkLine(b, c);
    int f3 = point.checkLint(c, a);    

    if (f1 < 0 && f2 < 0 && f3 < 0)
        return 1;
    else if (f1 > 0 && f2 > 0 && f3 > 0)
        return 1;
    else if (f1 == 0 || f2 == 0 || f3 == 0)
        return 1;
    return 0;
}
