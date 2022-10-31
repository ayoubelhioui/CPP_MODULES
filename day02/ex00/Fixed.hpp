#ifndef FIXED_HPP
#define FIXED_HPP
#define ZERO 0
#include <iostream>

class Fixed{
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &oldObj);
    Fixed &operator= (const Fixed &oldObj);
    int getRawBits() const ;
    void setRawBits(int const raw);
};
#endif
