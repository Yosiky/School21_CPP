#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   f1 = point.checkLine(a, b);
    float   f2 = point.checkLine(b, c);
    float   f3 = point.checkLine(c, a);    

    if (f1 < 0.001 && f2 < 0.001 && f3 < 0.001)
        return 1;
    else if (f1 > -0.001 && f2 > -0.001 && f3 > -0.001)
        return 1;
    else if ((-0.001 <= f1 && f1 <= 0.001) || (-0.001 <= f2 && f2 <= 0.001) || (-0.001 <= f3 && f3 <= 0.001))
        return 1;
    return 0;
}
