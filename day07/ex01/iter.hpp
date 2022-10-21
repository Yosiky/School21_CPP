#ifndef ITER_HPP
# define ITER_HPP

template <class T, class C>
int iter(T *addr, size_t size, C f)
{
    for (size_t i = 0; i < size; ++i)
        f(addr[i]);
    return (0);
}

template <class T>
int iter(T *, size_t, std::nullptr_t)
{
    return (-1);
}

#endif
