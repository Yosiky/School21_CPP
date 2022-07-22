#include <string>
#include <iostream>



int main(void)
{
    std::string line("HI THIS IS BRAIN");
    std::string *pLine = &line;
    std::string &lLine = line;

    std::cout << "address string = " << &line << std::endl;
    std::cout << "stringPTR = " << pLine << std::endl;
    std::cout << "stringREF = " << &lLine << std::endl;

    std::cout << "value string = " << line << std::endl;
    std::cout << "value stringPTR = " << *pLine << std::endl;
    std::cout << "value stringREF = " << lLine << std::endl;

    return 0;
}
