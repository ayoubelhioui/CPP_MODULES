#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int data);
        Fixed(const Fixed &oldObj);
        Fixed(const float data);
        ~Fixed();
        Fixed operator -(const Fixed &oldObj);
        Fixed &operator= (const Fixed &oldObj);
        int getRawBits() const ;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits(int const raw);
};
std::ostream& operator<< (std::ostream &ost, const Fixed &fixed);
#endif
