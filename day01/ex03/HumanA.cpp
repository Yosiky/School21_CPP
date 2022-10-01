#include "HumanA.hpp"

HumanA::HumanA(const std::string &_name, const Weapon &_weapon)
: weapon(_weapon), name(_name)
{
    std::cout << "HumanA was created" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA was destroied" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
