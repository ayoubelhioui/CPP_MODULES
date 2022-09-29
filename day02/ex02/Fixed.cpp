#include "Fixed.hpp"
Fixed::Fixed(const int data) : rawBits(data * (1 << fractionalBits))
{
    std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float data) : rawBits(roundf(data * (1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &oldObj)
{
    std::cout << "Copy constructor called" << std::endl;
    Fixed::setRawBits(oldObj.getRawBits());
}

Fixed::Fixed()
{
    rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

std::ostream& operator<< (std::ostream &ost, const Fixed &fixed)
{
    ost << fixed.toFloat();
    return (ost);
}

float Fixed::toFloat( void ) const
{
    return (((float) getRawBits() / (1 << fractionalBits)));
}

int Fixed::toInt() const
{
    return (getRawBits() >> fractionalBits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &oldObj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed::setRawBits(oldObj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits(const int raw)
{
    rawBits = raw;
}

int Fixed::getRawBits() const
{
    return (rawBits);
}

bool Fixed::operator< (const Fixed &oldObj)
{
    return (getRawBits() < oldObj.getRawBits());
}

bool Fixed::operator> (const Fixed &oldObj)
{
    return (getRawBits() > oldObj.getRawBits());
}

bool Fixed::operator>= (const Fixed &oldObj)
{
    return (getRawBits() >= oldObj.getRawBits());
}

bool Fixed::operator != (const Fixed &oldObj)
{
    return (getRawBits() != oldObj.getRawBits());
}

bool Fixed::operator == (const Fixed &oldObj)
{
    return (getRawBits() == oldObj.getRawBits());
}

Fixed Fixed::operator -(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits(this->getRawBits() - oldObj.getRawBits());
    return (returnedPoint);
}

Fixed Fixed::operator +(const Fixed &oldObj)
{
     Fixed returnedPoint;
    returnedPoint.setRawBits(this->getRawBits() + oldObj.getRawBits());
    return (returnedPoint);
}

Fixed Fixed::operator *(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits(this->getRawBits() * oldObj.getRawBits());
    return (returnedPoint);
}

Fixed Fixed::operator /(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits(this->getRawBits() / oldObj.getRawBits());
    return (returnedPoint);
}

void    Fixed::operator ++()
{
    setRawBits(getRawBits() + EPSILON);
}

void    Fixed::operator ++(int)
{
    ++rawBits;
}

void    Fixed::operator --()
{
    setRawBits(getRawBits() - EPSILON);
}

void    Fixed::operator --(int)
{
    --rawBits;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

