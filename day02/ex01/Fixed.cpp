/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:49:33 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/10 11:28:46 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int data) : rawBits(data << fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float data) : rawBits(roundf(data * (CANT_SHIFT)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oldObj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}

Fixed::Fixed()
{
    rawBits = ZERO;
    std::cout << "Default constructor called" << std::endl;
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
