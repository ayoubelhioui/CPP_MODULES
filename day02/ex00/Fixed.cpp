#include "Fixed.hpp"

Fixed::Fixed()
{
    setRawBits(ZERO);
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oldObj) {
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(oldObj.getRawBits());
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

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}