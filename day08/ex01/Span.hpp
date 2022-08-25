#ifndef SPAN_CPP
# define SPAN_CPP

# include <vector>
# include <exception>
# include <string>
# include <algorithm>

typedef unsigned int    uint;

class   Span
{
    std::vector<uint>   arr;
    uint                end;
    
    Span(void);
public:
    
    class   SpanException: public std::exception
    {
        const std::string   &str;
    public:
        SpanException(const std::string &s);
        virtual const char* what() const throw();
    };

    Span(uint n);
    Span(const Span &obj);
    ~Span(void);

    Span    &operator=(const Span &obj);

    void    addNumber(uint newValue);
    void    addArrayNumbers(uint *arr, uint size);
    uint    shortestSpan(void);
    uint    longestSpan(void);
};

#endif
