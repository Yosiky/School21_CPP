#include "AMateria.hpp"

AMateria::AMateria(void)
{ 
    std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor" << std::endl;
}

AMateria    &AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria was copied" << std::endl;
    type = obj.type;
    return *this;
}

std::string const   &AMateria::getType() const
{
    return type;
}

void    AMateria::use(__attribute__((unused))ICharacter &target)
{ }
