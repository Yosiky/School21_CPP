#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main(void)
{
    Data        a;
    Data        *c;
    uintptr_t   b;

    a.setData("hello");
    std::cout << a.getData() << std::endl;
    b = serialize(&a);
    a.setData("bye");
    c = deserialize(b);
    std::cout << c->getData() << std::endl;
    return 0;
}
