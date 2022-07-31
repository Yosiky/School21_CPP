#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    brain = NULL;
    *this = obj;
}

Dog::~Dog(void)
{
    std::cout << "Dog was destroyed" << std::endl;
    delete brain;
}
                                
Dog &Dog::operator=(const Dog &obj)
{
    Animal::operator=(obj);
    if (brain == NULL)
        brain = new Brain();
    *brain = *(obj.brain);
    return *this;
}

void    Dog::setIdea(int num, const std::string &str)
{
    if (num < 0 || num >= BRAIN_COUNT_IDEAS)
        return ;
    brain->ideas[num] = str;
}

const std::string   &Dog::getIdea(int num) const
{
    num %= BRAIN_COUNT_IDEAS;
    num += BRAIN_COUNT_IDEAS;
    num %= BRAIN_COUNT_IDEAS;
    return brain->ideas[num];
}
