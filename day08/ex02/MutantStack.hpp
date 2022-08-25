#ifdef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class   MutantStack : public std::stack<T>
{

public:
    MutantStack(void);
    MutantStack(const MutantStack &obj);
    virtual ~MutantStack(void);

    MutantStack<T> &operator=(const MutantStack<T> &obj);
}

# include "MutantStack.tpp"

#endif
