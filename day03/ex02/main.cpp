#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    dev("Devid");
    ScavTrap    jen("Jenya");
    ScavTrap    kos("Kostya");

    for (int i = 0; i < 51; ++i)
        dev.beRepaired(10);
    for (int i = 0; i < 11; ++i)
        jen.takeDamage(10);
    kos.attack("Jenya");
    return 0;
}
