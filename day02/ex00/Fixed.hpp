#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &oldObj);
        ~Fixed();
        Fixed &operator= (const Fixed &oldObj);
        int getRawBits() const ;
        void setRawBits(int const raw);
};
#endif
