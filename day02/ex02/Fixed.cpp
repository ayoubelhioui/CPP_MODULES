/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:17:03 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/10 13:45:59 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int data) : rawBits(data << fractionalBits)
{
    // std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float data) : rawBits(roundf(data * (CANT_SHIFT)))
{
    // std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &oldObj)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(oldObj.getRawBits());
}

Fixed::Fixed()
{
    rawBits = 0;
    // std::cout << "Default constructor called" << std::endl;
}

std::ostream& operator<< (std::ostream &ost, const Fixed &fixed)
{
    ost << fixed.toFloat();
    return (ost);
}

float Fixed::toFloat( void ) const
{
    return (((float) getRawBits() / (CANT_SHIFT)));
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
    setRawBits(oldObj.getRawBits());
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

bool Fixed::operator> (const Fixed &oldObj) const
{
    return (getRawBits() > oldObj.getRawBits());
}

bool Fixed::operator< (const Fixed &oldObj) const
{
    return (getRawBits() < oldObj.getRawBits());
}

bool Fixed::operator>= (const Fixed &oldObj) const
{
    return (getRawBits() >= oldObj.getRawBits());
}

bool Fixed::operator != (const Fixed &oldObj) const
{
    return (getRawBits() != oldObj.getRawBits());
}

bool Fixed::operator == (const Fixed &oldObj) const
{
    return (getRawBits() == oldObj.getRawBits());
}

Fixed Fixed::operator -(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits(getRawBits() - oldObj.getRawBits());
    return (returnedPoint);
}

Fixed Fixed::operator +(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits(getRawBits() + oldObj.getRawBits());
    return (returnedPoint);
}

Fixed Fixed::operator *(const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits((getRawBits() * oldObj.getRawBits()) / CANT_SHIFT);
    return (returnedPoint);
}

Fixed Fixed::operator / (const Fixed &oldObj)
{
    Fixed returnedPoint;
    returnedPoint.setRawBits((this->getRawBits() / CANT_SHIFT)  / oldObj.getRawBits());
    return (returnedPoint);
}

Fixed &Fixed::operator ++()
{
    setRawBits(getRawBits() + (EPSILON * CANT_SHIFT));
    return (*this);
}

Fixed   Fixed::operator ++(int)
{
    Fixed temp;
    temp.setRawBits(getRawBits());
    setRawBits(getRawBits() + (EPSILON * CANT_SHIFT));
    return (temp);
}
  
Fixed   &Fixed::operator --()
{
    setRawBits(getRawBits() - (EPSILON * CANT_SHIFT));
    return (*this);
}

Fixed   Fixed::operator --(int)
{
    Fixed temp;
    temp.setRawBits(getRawBits());
    setRawBits(getRawBits() - (EPSILON * CANT_SHIFT));
    return (temp);
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
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}