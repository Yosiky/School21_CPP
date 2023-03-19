#include <iostream>
#include <fstream>
#include <string>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc == 1)
        std::cerr << "Error: could not open file." << std::endl;
    else {
        BitcoinExchange history("./data.csv", ",");
        BitcoinExchange obj(argv[1], " | ", 1000);
        float value;
        int size = obj.size();

        for (int i = 0; i < size; ++i) {
            value = history.lowerBound(obj.getTop().first);
            std::cout << obj.getTop().first << " => " << obj.getTop().second << " = " << obj.getTop().second * value << std::endl;
            obj.pop();
        }
    }
    return (0);
}
