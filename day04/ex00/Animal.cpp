#include "Animal.hpp"

Animal::Animal(void)
: type("Animal")
{
    std::cout << type + " without type is create" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::~Animal(void)
{
    std::cout << getType() + " is destroy" << std::endl;
}

Animal  &Animal::operator=(const Animal &obj)
{
    std::cout << type + " was copied" << std::endl;
    type = obj.type;
    return *this;
}
                                       
void    Animal::makeSound(void) const
{
    std::cout << type + " sound" << std::endl;
}

std::string &Animal::getType(void)
{
    return type;
}
