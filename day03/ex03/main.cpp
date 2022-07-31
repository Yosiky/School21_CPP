#include <iostream>
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap    *les = new DiamondTrap("Lesha");
    DiamondTrap    dev("Devid");
    DiamondTrap    jen("Jenya");
    DiamondTrap    kos("Kostya");

    for (int i = 0; i < 51; ++i)
        dev.beRepaired(10);
    for (int i = 0; i < 11; ++i)
        jen.takeDamage(10);
    for (int i = 0; i < 51; ++i)
        kos.attack("Jenya");
    jen.whoAmI();
    jen = kos;
    jen.whoAmI();
    delete les;
    return 0;
}
