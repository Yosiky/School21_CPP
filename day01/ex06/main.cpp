#include "Harl.hpp"
#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "ERROR: valid argument" << std::endl;
        return 1;
    }
    for (size_t i = 0; argv[1][i]; ++i)
        argv[1][i] = static_cast<char>(tolower(argv[1][i]));
    Harl    man((std::string(argv[1])));

    man.complain("debug");
    man.complain("error");
    man.complain("info");
    man.complain("warning");
    man.complain("asdf");
    man.complain("");
    return (0);
}
