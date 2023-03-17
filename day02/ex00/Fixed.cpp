/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:50:33 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/10 12:50:34 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(ZERO)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oldObj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &oldObj){
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(oldObj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits(const int raw) {
    rawBits = raw;
}

int     Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}