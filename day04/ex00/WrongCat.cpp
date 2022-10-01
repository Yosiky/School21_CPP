#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    type = "WrongCat";
    std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat was destroyed" << std::endl;
}
                                    
WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    WrongAnimal::operator=(obj);
    return *this;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;

}
