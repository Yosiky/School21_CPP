#include "Weapon.hpp"

Weapon::Weapon(const std::string &value)
: type(value)
{ }

const std::string   &Weapon::getType(void) const
{
    return type;
}

void    Weapon::setType(const std::string &_type)
{
   type = _type;
}
