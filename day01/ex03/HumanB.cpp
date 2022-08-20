#include "HumanB.hpp"

HumanB::HumanB(const std::string &_name)
: weapon(NULL), name(_name)
{
    std::cout << "HumanB was created" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB was destroied" << std::endl;
}

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
