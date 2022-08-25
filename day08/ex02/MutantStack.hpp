#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iterator>

template <class T, class Container = std::deque<T> >
class   MutantStack : public std::stack<T, Container>
{
public:
    using   std::stack<T, Container>::c;
    typedef typename std::stack<T, Container>::container_type::iterator reverse_iterator;
    typedef typename std::stack<T, Container>::container_type::reverse_iterator iterator;
    //MutantStack<T> &operator=(const MutantStack<T> &obj);

    iterator   begin(void)
    {
        return c.rbegin();
    }

    iterator  end(void)
    {
        return c.rend();
    }
};

//# include "MutantStack.tpp"

#endif
