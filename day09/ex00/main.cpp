#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc == 1)
        std::cerr << "Error: could not open file." << std::endl;
    else {
        std::ifstream fd(argv[1]);

    }
    return (0);
}
