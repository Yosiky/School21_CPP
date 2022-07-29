#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    *les = new FragTrap("Lesha");
    FragTrap    dev("Devid");
    FragTrap    jen("Jenya");
    FragTrap    kos("Kostya");

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
