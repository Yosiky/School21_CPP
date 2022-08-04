#include "Cure.hpp"

Cure::Cure(void)
: AMateria("cure")
{
    std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
}

Cure::~Cure(void)
{
    std::cout << "Cure destuctor" << std::endl;
}
                                      
Cure    &Cure::operator=(const Cure &obj)
{
    AMateria::operator=(obj);
    std::cout << "Cure was copied" << std::endl;
    return *this;
}

AMateria*   Cure::clone() const
{
    return new Cure();
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
}
