#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>

#define UNUSED __attribute__((__unused__))

Base    *generate(void)
{
    int r = rand() % 3;

    switch (r)
    {
        case 0: return dynamic_cast<Base *>(new A);
        case 1: return dynamic_cast<Base *>(new B);
        case 2: return dynamic_cast<Base *>(new C);
    }
    return NULL;
}

void    indetify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "class A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "class B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "class C" << std::endl;
}

void    indetify(Base &p)
{
    std::cout << "class ";
    try
    {
        UNUSED A    &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
    try
    {
        UNUSED B    &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
    try
    {
        UNUSED C    &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch (std::exception &a) { }
}

int main(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    Base    *arr[3] = {new A, new B, new C};
    Base    *value = generate();

    for (int i = 0; i < 3; ++i)
    {
        indetify(arr[i]);
        indetify(*arr[i]);
        delete arr[i];
    }
    std::cout << "Random class: " << std::endl;
    indetify(value);
    indetify(*value);
    delete value;
    return 0;
}
