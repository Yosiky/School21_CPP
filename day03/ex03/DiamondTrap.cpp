#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{ }

const std::string   DiamondTrap::isName(void)
{
    return "DiamondTrap";
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    *this = obj;
}

DiamondTrap::DiamondTrap(const std::string &_name)
: FragTrap(_name + "_clap_trap"), name(_name)
{
    energy = 50;
    std::cout << isName() + " " << name << " is create" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << isName() + " " + name + " is destroy" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    name = obj.name;
    ScavTrap::operator=(obj);
    return *this;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
