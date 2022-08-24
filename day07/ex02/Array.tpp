#ifndef ARRAY_TPP
# define ARRAY_TPP

template <class T>
Array<T>::Array(void)
{
    arr = new T[0];
    count = 0;
}

template <class T>
Array<T>::Array(uint n)
{
    arr = new T[n];
    count = n;
}

template <class T>
Array<T>::Array(const Array<T> &obj)
{
    *this = obj;
}

template <class T>
Array<T>::~Array(void)
{
    delete[] arr;
}

template <class T>
Array<T>   &Array<T>::operator=(const Array<T> &obj)
{
    delete[] arr;
    count = obj.count;
    arr = new T[count];
    for (uint i = 0; i < count; ++i)
        arr[i] = obj.arr[i];
    return *this;
}

template <class T>
T   &Array<T>::operator[](uint ind) const
{
    if (ind >= count)
        throw std::exception();
    return arr[ind];
}

template <class T>
uint    Array<T>::size(void) const
{
    return count;
}

#endif
