#include <iostream>
#include "Point.hpp"

#ifndef TEST
# define TEST 0
#endif

typedef std::pair<float, float> t_point;

bool    bsp(Point const a, Point const b, Point const c, Point const point);

bool    checkFunc(const t_point *p)
{
    float f1 = (p[0].first - p[3].first) * (p[1].second - p[0].second) - (p[1].first - p[0].first) * (p[0].second - p[3].second);
    float f2 = (p[1].first - p[3].first) * (p[2].second - p[1].second) - (p[2].first - p[1].first) * (p[1].second - p[3].second);
    float f3 = (p[2].first - p[3].first) * (p[0].second - p[2].second) - (p[0].first - p[2].first) * (p[2].second - p[3].second);

    return (f1 > 0 && f2 > 0 && f3 > 0) || (f1 < 0 && f2 < 0 && f3 < 0) || (-0.001 <= f1 + f2 + f3 && f1 + f2 + f3 <= 0.001);
}

void    hand_test(t_point *arr, Point   *my_arr)
{
    int n;

    std::cout << "Enter number of attempts:" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Input point[a b]:" << std::endl;
        std::cin >> arr[i].first >> arr[i].second;
        my_arr[i] = Point(Fixed(arr[i].first), Fixed(arr[i].second));
        if (bsp(my_arr[0], my_arr[1], my_arr[2], my_arr[3]) == checkFunc(arr))
            std::cout << "Success" << std::endl;
        else
            std::cout << "Failed" << std::endl;
    }
}

void    setPoint(const t_point *arr, Point *my_arr)
{
    for (int i = 0; i < 3; ++i)
        my_arr[i] = Point(Fixed(arr[i].first), Fixed(arr[i].second));
}

void    printPoint(const Point *arr, int count)
{
    std::cout << "Points: ";
    for (int i = 0; i < count; ++i)
        std::cout << arr[i] << std::endl;
}

void    auto_test(void);

#if TEST == 1
void    auto_test(void)
{
    const int   COUNT_TEST_POINT = 16;
    const t_point triangle[3] =
    {
        {0, 0},
        {4, 4},
        {8, 0}
    };
    t_point arr[] = {
        {0, 0},         // equal points 
        {4, 4},
        {8, 0},
        {2, 2},         // on line
        {6, 2},
        {4, 0},
        {4, 1},         // in triangle
        {-1, 0},        // on line, but don't belongs triangle
        {-2, -2},
        {6, 6},
        {2, 6},
        {10, -2},
        {10, 0},
        {-1, 4},        // not in a triangle
        {0, 4},
        {8, 4}
    };
    Point   my_arr[4];

    setPoint(triangle, my_arr);
    printPoint(my_arr, 3);
    for (int i = 0; i < COUNT_TEST_POINT; ++i)
    {
        my_arr[3] = Point(Fixed(arr[i].first), Fixed(arr[i].second));
        printPoint(&my_arr[3], 1);
        std::cout << "Result(my, std): " << bsp(my_arr[0], my_arr[1], my_arr[2], my_arr[3])
                    << checkFunc(triangle) << std::endl;
    }
}
#endif


int main(void)
{
#if TEST == 1
    auto_test();
#endif
    //hand_test(arr, my_arr);
    return 0;
}

