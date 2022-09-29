#ifndef FIXED_HPP
#define FIXED_HPP

#define EPSILON 0.00390625
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
        Fixed   &operator = (const Fixed &oldObj);
        bool    operator > (const Fixed &oldObj);
        bool    operator < (const Fixed &oldObj);
        bool    operator >= (const Fixed &oldObj);
        bool    operator <= (const Fixed &oldObj);
        Fixed   operator +(const Fixed &oldObj);
        Fixed   operator -(const Fixed &oldObj);
        Fixed   operator *(const Fixed &oldObj);
        Fixed   operator /(const Fixed &oldObj);
        bool    operator == (const Fixed &oldObj);
        bool    operator != (const Fixed &oldObj);
        void    operator ++();
        void    operator ++(int);
        void    operator --();
        void    operator --(int);
        int     getRawBits() const ;
        float   toFloat( void ) const;
        int     toInt( void ) const;
        void    setRawBits(int const raw);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static
};
#endif