#include "Harl.hpp"

int main(void)
{
    Harl    man;
    
    man.complain("debug");
    man.complain("error");
    man.complain("info");
    man.complain("warning");
    man.complain("asdf");
    man.complain("");
    return (0);
}
