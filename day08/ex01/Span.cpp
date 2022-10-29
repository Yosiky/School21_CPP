#include "Span.hpp"

Span::Span(uint n)
: arr(n, 0), end(0)
{ }

Span::Span(const Span &obj)
{
    *this = obj;
}

Span::~Span(void)
{ }

Span    &Span::operator=(const Span &obj)
{
    arr = obj.arr;
    end = obj.end;
    return *this;
}
void    Span::addNumber(uint newValue)
{
    if (end == arr.size())
        throw Span::SpanException("error");
    arr[end++] = newValue;
}

void    Span::addNumber(std::vector<uint>::iterator begin, std::vector<uint>::iterator end)
{
    for (std::vector<uint>::iterator &i = begin; i != end; ++i)
        addNumber(*i);
}

void    Span::addArrayNumbers(const uint *arr, uint size)
{
    for (uint i = 0; i < size; ++i)
        addNumber(arr[i]);
}

uint    Span::shortestSpan(void)
{
    if (end < 2)
        throw Span::SpanException("Error count");
    uint    m;
    std::vector<uint> arr_copy(arr.begin(), arr.begin() + end);

    std::sort(arr_copy.begin(), arr_copy.end());
    m = arr_copy[1] - arr_copy[0];
    for (uint i = 2; i < end; ++i)
    {
        if (m > arr_copy[i] - arr_copy[i - 1])
            m = arr_copy[i] - arr_copy[i - 1];
    }
    return m;
}

uint    Span::longestSpan(void)
{
    if (end < 2)
        throw Span::SpanException("Error count");
    uint mm[2] = { arr[0], arr[1] };

    if (mm[0] > mm[1]) 
        std::swap(mm[0], mm[1]);
    for (uint i = 2; i < end; ++i)
    {
        if (arr[i] < mm[0])
            mm[0] = arr[i];
        else if (arr[i] > mm[1])
            mm[1] = arr[i];
    }
    return mm[1] - mm[0];
}

void    Span::printArray(void)
{
    for (uint i = 0; i < end - 1; ++i)
        std::cout << arr[i] << ' ';
    std::cout << arr[end - 1] << std::endl;

}

Span::SpanException::SpanException(const std::string &s)
: str(s)
{ }

const char  *Span::SpanException::what(void) const throw()
{
    return str.c_str();
}

Span::SpanException::~SpanException(void) throw()
{ }
