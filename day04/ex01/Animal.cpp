#include "Animal.hpp"

Animal::Animal(void)
: type("Animal")
{
    std::cout << "Animal was created" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::~Animal(void)
{
    std::cout << "Animal was destroyed" << std::endl;
}

Animal  &Animal::operator=(const Animal &obj)
{
    std::cout << type + " -> " + obj.type << std::endl;
    type = obj.type;
    return *this;
}
                                       
void    Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

const std::string &Animal::getType(void) const
{
    return type;
}
