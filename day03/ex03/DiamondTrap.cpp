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
: ClapTrap(_name + "_clap_trap"), name(_name)
{
    hitPoint = 100;
    energy = 50;
    damage = 30;
    std::cout << isName() + " " << DiamondTrap::name << " is create" << std::endl;
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

void    DiamondTrap::whoAmI(void)
{
    std::cout << isName() + " " + name << std::endl;
    std::cout << ClapTrap::isName() + " " + ClapTrap::name << std::endl;
}
