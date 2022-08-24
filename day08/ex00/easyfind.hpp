#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class InpT>
typename InpT::iterator easyfind(InpT &a, int b)
{
    typename InpT::iterator i = find(a.begin(), a.end(), b);
    return i;
}

#endif
