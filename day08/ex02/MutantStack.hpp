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
    typedef typename std::stack<T, Container>::container_type::iterator iterator;
    typedef typename std::stack<T, Container>::container_type::const_iterator citerator;
    typedef typename std::stack<T, Container>::container_type::reverse_iterator riterator;
    typedef typename std::stack<T, Container>::container_type::const_reverse_iterator criterator;
    //MutantStack<T> &operator=(const MutantStack<T> &obj);

    iterator   begin(void)
    {
        return c.begin();
    }

    iterator  end(void)
    {
        return c.end();
    }

    citerator   cbegin(void)
    {
        return c.cbegin();
    }
                           
    citerator  cend(void)
    {
        return c.cend();
    }

    riterator   rbegin(void)
    {
        return c.rbegin();
    }
                             
    riterator  rend(void)
    {
        return c.rend();
    }
                             
    criterator   crbegin(void)
    {
        return c.crbegin();
    }
                           
    criterator  crend(void)
    {
        return c.crend();
    }




};

//# include "MutantStack.tpp"

#endif
