#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::string word(argv[1]);
        std::stringstream line(argv[1]);
        double  dValue;
        line >> dValue;

        if (word == "nan")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl; 
            std::cout << "float: nanf" << std::endl; 
            std::cout << "double: nan" << std::endl; 
        }
        else if (word == "0")
        {
            std::cout << "char: Nan displayble" << std::endl;
            std::cout << "int: 0" << std::endl;
            std::cout << "float: 0.0f" << std::endl;
            std::cout << "double: 0.0" << std::endl;
        }
        else
        {
            std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(dValue) << std::endl; 
            std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;
            std::cout << "double: " << dValue << std::endl;
        }
    }
    else
        std::cout << "Error: input ./convert [value]" << std::endl;
    return 0;
}
