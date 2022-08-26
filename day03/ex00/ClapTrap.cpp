#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{ }

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    *this = obj;
}

ClapTrap::ClapTrap(const std::string &_name)
: name(_name), hitPoint(10), energy(10), damage(0)
{
    std::cout << "ClapTrap " << name << " is create" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << name << " is destroy" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap " << obj.name << " is copy" << std::endl;
    name = obj.name;
    hitPoint = obj.hitPoint;
    energy = obj.energy;
    damage = obj.damage;
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " have zero energy" << std::endl;
        return ;
    }
    else if (hitPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
    --energy;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoint <= 0)
    {
        std::cout << "ClapTrap " << name << " already dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " get damage (" << amount << ")" << std::endl;
    hitPoint -= amount;
    hitPoint = hitPoint < 0 ? 0 : hitPoint;
    if (!hitPoint)
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy <= 0)
    {
        std::cout << "ClapTrap " << name << " have zero energy " << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " repaired (" << amount << ")" << std::endl;
    hitPoint += amount;
    --energy;
}

