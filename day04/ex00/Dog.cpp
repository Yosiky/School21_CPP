#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog(void)
{
    std::cout << "Dog was destroyed" << std::endl;
}
                                
Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    return *this;
}

