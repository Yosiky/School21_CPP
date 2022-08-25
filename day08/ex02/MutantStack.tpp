
template <class T, class Container = std::deque<T> >
typename MutantStack<T, Container>::iterator    MutantStack<T, Container>::begin(void)
{
    return std::begin(c);
}

iterator  &end(void)
{
    return std::end(c);
}
