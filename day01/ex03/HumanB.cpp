#include "HumanB.hpp"

HumanB::HumanB(const std::string &_name)
: weapon(NULL), name(_name)
{ }

void    HumanB::attack(void)
{
    if (weapon == NULL)
        std::cout << name << " attacks with their [none]" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
    weapon = &_weapon;
}
