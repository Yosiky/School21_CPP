#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap    *les = new DiamondTrap("Lesha");
    DiamondTrap    dev("Devid");
    DiamondTrap    jen("Jenya");
    DiamondTrap    kos("Kostya");

    for (int i = 0; i < 101; ++i)
        dev.beRepaired(10);
    for (int i = 0; i < 11; ++i)
        jen.takeDamage(10);
    for (int i = 0; i < 101; ++i)
        kos.attack("Jenya");
    jen = kos;
    delete les;
    return 0;
}
