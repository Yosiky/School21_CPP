#ifndef FIXED_HPP
# define FIXED_HPP

# define WIDTH_FLOAT_PARTH 8

# include <iostream>

class   Fixed
{
private:
    int value;
    static int  widthFloatParth;

public:
    Fixed(void);
    Fixed(const Fixed &obj);
    ~Fixed(void);

    Fixed   &operator=(const Fixed &obj);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif //FIXED_HPP
