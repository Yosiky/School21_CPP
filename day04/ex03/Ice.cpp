#include "Ice.hpp"

Ice::Ice(void)
: AMateria("ice")
{
    std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice::~Ice(void)
{
    std::cout << "Ice destuctor" << std::endl;
}
                                      
Ice    &Ice::operator=(const Ice &obj)
{
    AMateria::operator=(obj);
    std::cout << "Ice was copied" << std::endl;
    return *this;
}

AMateria*   Ice::clone() const
{
    return new Ice();
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
