#include "Cat.hpp"

Cat::Cat(void)
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    brain = NULL;
    *this = obj;
}

Cat::~Cat(void)
{
    std::cout << "Cat was destroyed" << std::endl;
    delete brain;
}
                                    
Cat &Cat::operator=(const Cat &obj)
{
    Animal::operator=(obj);
    if (brain == NULL)
        brain = new Brain();
    *brain = *(obj.brain);
    return *this;
}

void    Cat::setIdea(int num, const std::string &str)
{
    if (num < 0 || num >= BRAIN_COUNT_IDEAS)
        return ;
    brain->ideas[num] = str;
}

const std::string   &Cat::getIdea(int num) const
{
    num %= BRAIN_COUNT_IDEAS;
    num += BRAIN_COUNT_IDEAS;
    num %= BRAIN_COUNT_IDEAS;
    return brain->ideas[num];
}

void    Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}
