#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{ }

const std::string   ScavTrap::isName(void)
{
    return "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
}

ScavTrap::ScavTrap(const std::string &_name)
: ClapTrap(_name)
{ 
    hitPoint = 100;
    energy = 50;
    damage = 20;
    std::cout << isName() + " " << name << " is create" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << isName() << " " << name << " is destroy" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}

void    ScavTrap::guardGate(void)
{
    std::cout << isName() + " is now in Gate keeper mode" << std::endl;
}
