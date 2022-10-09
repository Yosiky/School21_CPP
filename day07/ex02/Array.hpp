#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

typedef unsigned int uint;

template <class T>
class   Array
{
    T       *arr;
    uint    count;
public:
    Array(void);
    Array(uint n);
    Array(const Array<T> &obj);
    ~Array(void);

    Array<T>   &operator=(const Array<T> &obj);
    T   &operator[](uint ind) const;
    uint    size(void) const;
};


#include "Array.tpp"

#endif
