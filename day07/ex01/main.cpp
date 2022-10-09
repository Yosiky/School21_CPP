#include <iostream>
#include "iter.hpp"

void    func(int &a)
{
    ++a;
}

std::string &func2(std::string &str)
{
    str += "bye";
    return str;
}

template<class T>
T    &print(T &a)
{
    std::cout << a << ' ';
    return a;
}

int main(void)
{
    const int   SIZE_INT_ARR = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    const int   SIZE_STR_ARR = 3;
    std::string arr2[] = {"hello", "alaksjdf", "world"};

    iter(arr, SIZE_INT_ARR, print<int>);
    std::cout << std::endl;
    iter(arr, SIZE_INT_ARR, func);
    iter(arr, SIZE_INT_ARR, print<int>);
    std::cout << std::endl;
    iter(arr2, SIZE_STR_ARR, print<std::string>);
    std::cout << std::endl;
    iter(arr2, SIZE_STR_ARR, func2);
    iter(arr2, SIZE_STR_ARR, print<std::string>);
    return 0;
}
