#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{ }

const std::string   FragTrap::isName(void)
{
    return "FragTrap";
}

FragTrap::FragTrap(const FragTrap &obj)
{
    *this = obj;
}

FragTrap::FragTrap(const std::string &_name)
: ClapTrap(_name)
{
    hitPoint = 100;
    energy = 100;
    damage = 30;
    std::cout << isName() + " " + name + " is create" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << isName() + " " + name + " is destroy" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &obj)
{
    ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << isName() + " " + name + " say HIGH FIVES GUYS" << std::endl;
}
