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

Animal  &Animal::operator=(const Animal &obj);
                                       
void    Animal::makeSound(void);

std::string &Animal::getType(void);
