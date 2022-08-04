#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
    std::cout << "ICharacter constructor" << std::endl;
}

ICharacter::ICharacter(const ICharacter &obj)
{
    *this = obj;
}

ICharacter  &ICharacter::operator=(__attribute__((unused))const ICharacter &obj)
{
    std::cout << "ICharacter was copied" << std::endl;
    return *this;
}

ICharacter::~ICharacter(void)
{
    std::cout << "ICharacter destructor" << std::endl;
}
