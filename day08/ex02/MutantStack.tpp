
template <class T>
MutantStack<T>::MutantStack(void)
: stack()
{ }

template <class T>
MutantStack<T>::MutantStack(const MutantStack &obj)
: stack(obj)
{ }

template <class T>
MutantStack<T>::~MutantStack(void)
: ~stack()
{ }
