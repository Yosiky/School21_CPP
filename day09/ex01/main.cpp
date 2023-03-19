#include <iostream>
#include <cstdlib>
#include <string>
#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        RPN rpn;
        std::string str(argv[1]);
        bool space = true;
        int size = str.size();

        for (int i = 0; i < size; ++i) {
            if (str[i] != ' ' && space) {
                if (std::isdigit(str[i]))
                    rpn.push(str[i] - '0');
                else
                    rpn.exec(str[i]);
                space = false;
            }
            else if (str[i] == ' ')
                space = true;
            else {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
        }
        std::cout << rpn.top();
    }
    else {
        std::cerr << "Error" << std::endl;
    }
    return (0);
}
