#ifndef FIXED_CPP
#define FIXED_CPP
#include <iostream>

class Fixed{
    private:
        int rawBits;
        static const int fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &oldObj);
        ~Fixed();
        Fixed &operator= (const Fixed &oldObj);
        int getRawBits() const ;
        void setRawBits(int const raw);
};
#endif
