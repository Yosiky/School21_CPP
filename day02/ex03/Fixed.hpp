#ifndef FIXED_HPP
# define FIXED_HPP

# define WIDTH_FLOAT_PARTH 8
# define BIN_WIDTH_FLOAT_PARTH 0xff

# include <iostream>
# include <cmath>

class   Fixed
{
private:
    int value;
    static int  widthFloatParth;

public:
    Fixed(void);
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &obj);
    ~Fixed(void);

    Fixed   &operator=(const Fixed &obj);
    bool    operator<(const Fixed &obj) const;
    bool    operator<=(const Fixed &obj) const;
    bool    operator>(const Fixed &obj) const;
    bool    operator>=(const Fixed &obj) const;
    bool    operator==(const Fixed &obj) const;
    bool    operator!=(const Fixed &obj) const;
    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed   operator*(const Fixed &obj) const;
    Fixed   operator+(const Fixed &obj) const;
    Fixed   operator-(const Fixed &obj) const;
    Fixed   operator/(const Fixed &obj) const;

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    static Fixed    &min(Fixed &a, Fixed &b);
    static Fixed    &max(Fixed &a, Fixed &b);
    static const Fixed    &min(const Fixed &a, const Fixed &b);
    static const Fixed    &max(const Fixed &a, const Fixed &b);


};

std::ostream    &operator<<(std::ostream &out, const Fixed &value);

#endif //FIXED_HPP
