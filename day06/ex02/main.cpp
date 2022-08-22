#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <exception>


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
    static const char   str[4] = "ABC";
    int i = 0;

    std::cout << "class ";
    while (i < 3)
    {
        try
        {
            switch (i)
            {
                case 0: dynamic_cast<A &>(p); break;
                case 1: dynamic_cast<B &>(p); break;
                case 2: dynamic_cast<C &>(p); break;
            }
            std::cout << str[i] << std::endl;
            return ;
        }
        catch (std::exception &a)
        {
            ++i;
        }
    }
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
