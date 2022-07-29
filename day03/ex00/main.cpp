#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    dev("Devid");
    ClapTrap    jen("Jenya");
    ClapTrap    kos("Kostya");

    for (int i = 0; i < 11; ++i)
        dev.beRepaired(1);
    for (int i = 0; i < 6; ++i)
        jen.takeDamage(2);
    kos.attack("Jenya");

    return 0;
}
