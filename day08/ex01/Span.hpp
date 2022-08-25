#ifndef SPAN_CPP
# define SPAN_CPP

# include <vector>
# include <exception>
# include <string>
# include <algorithm>
# include <iostream>

typedef unsigned int    uint;

class   Span
{
    std::vector<uint>   arr;
    uint                end;
    
    Span(void);
public:
    
    class   SpanException: public std::exception
    {
        const std::string   str;
    public:
        SpanException(const std::string &s);
        virtual const char* what() const throw();
        ~SpanException(void) _NOEXCEPT;
    };

    Span(uint n);
    Span(const Span &obj);
    ~Span(void);

    Span    &operator=(const Span &obj);

    void    addNumber(uint newValue);
    void    addArrayNumbers(const uint *arr, uint size);
    uint    shortestSpan(void);
    uint    longestSpan(void);
    void    printArray(void);
};

#endif
