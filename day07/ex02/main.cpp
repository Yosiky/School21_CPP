#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
    const int N = 10;
    Array<int>  one;
    Array<int>  two(N);

    std::cout << "size one: " << one.size() << std::endl;
    std::cout << "size two: " << two.size() << std::endl;
    for (uint i = 0; i < N; ++i)
    {
        two[i] = static_cast<int>(i);
        std::cout << two[i] << ' ';
    }
    std::cout << std::endl;
    one = two;
    std::cout << "size one: " << one.size() << std::endl;
    for (uint i = 0; i < N; ++i)
        std::cout << one[i] << ' ';
    std::cout << std::endl;

    const int T = 4;
    Array<std::string>  three;
    Array<std::string>  four(T);
    four[0] = "a";
    four[1] = "b";
    four[2] = "c";
    four[3] = "d";

    std::cout << "size three: " << three.size() << std::endl;
    std::cout << "size four: " << four.size() << std::endl;
    for (uint i = 0; i < T; ++i)
        std::cout << four[i] << ' ';
    std::cout << std::endl;
    three = four;
    std::cout << "size three: " << three.size() << std::endl;
    for (uint i = 0; i < T; ++i)
        std::cout << three[i] << ' ';
    return 0;
}
