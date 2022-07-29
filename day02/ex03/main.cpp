#include <iostream>
#include "Point.hpp"

typedef std::pair<float, float> t_point;

bool    bsp(Point const a, Point const b, Point const c, Point const point);

bool    checkFunc(t_point *p)
{
    float f1 = (p[0].first - p[3].first) * (p[1].second - p[0].second) - (p[1].first - p[0].first) * (p[0].second - p[3].second);
    float f2 = (p[1].first - p[3].first) * (p[2].second - p[1].second) - (p[2].first - p[1].first) * (p[1].second - p[3].second);
    float f3 = (p[2].first - p[3].first) * (p[0].second - p[2].second) - (p[0].first - p[2].first) * (p[2].second - p[3].second);

    return (f1 > 0 && f2 > 0 && f3 > 0) || (f1 < 0 && f2 < 0 && f3 < 0) || (f1 + f2 + f3 == 0);

}

int main(void)
{
    t_point arr[4];
    Point   my_arr[4];
    int     n;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Input points:" << std::endl;
        for (int j = 0; j < 4; ++j)
        {
            std::cin >> arr[i].first >> arr[i].second;
            my_arr[i] = Point(Fixed(arr[i].first), Fixed(arr[i].second));
        }
        if (bsp(my_arr[0], my_arr[1], my_arr[2], my_arr[3]) == checkFunc(arr))
            std::cout << "Success" << std::endl;
        else
            std::cout << "Failed" << std::endl;
    }

    return 0;
}

