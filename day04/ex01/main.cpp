#include <iostream> 
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define START_TEST(num) std::cout << "START TEST: "#num << std::endl;
#define FINISH_TEST(num) std::cout << "FINISH TEST: "#num << std::endl;


void    testOne(void)
{
    START_TEST(1);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
                                                   
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;    
    delete i;
    FINISH_TEST(1);
}

void    testTwo(void)
{
    START_TEST(2);
    Animal  a;
    Dog     b;
    Cat     c;

    std::cout << a.getType() << " " << b.getType() << " " << c.getType() << std::endl;
    a = b;
    std::cout << "Animal " << a.getType() << std::endl;
    a = c;
    std::cout << "Animal " << a.getType() << std::endl;
    FINISH_TEST(2);
}

void    testThree(void)
{
    START_TEST(3);
    Animal  *a;
    Dog     b;
    Cat     c;

    std::cout << b.getType() << " " << c.getType() << std::endl;
    a = &b;
    std::cout << "Animal " << a->getType() << std::endl;
    a = &c;
    std::cout << "Animal " << a->getType() << std::endl;
    FINISH_TEST(3);
}

void    testFour(void)
{
    START_TEST(4);
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    Dog     b;
    Animal  *a = &b;
    std::cout << a->getType() << std::endl;
    FINISH_TEST(4);
}

int main()
{
//    testOne();
//    testTwo();
//    testThree();
    testFour();
    return 0;
}
