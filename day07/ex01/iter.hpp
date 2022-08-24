#ifndef ITER_HPP
# define ITER_HPP

template <class T, class C>
void    iter(T *addr, size_t size, C f)
{
    for (size_t i = 0; i < size; ++i)
        f(addr[i]);
}

#endif
