#include "ScavTrap.hpp"

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
}

ScavTrap::~ScavTrap(void)
{ }

ScavTrap    &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}
