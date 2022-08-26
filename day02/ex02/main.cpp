#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed c(2);
    Fixed const b( Fixed( 5.05f ) * c );
    std::cout << b / c << std::endl;
    std::cout << b - c << std::endl;
    std::cout << b + c << std::endl;
    std::cout << (b + c) * c << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    return 0;
}
