#include "Fixed.hpp"
const int Fixed::fractionalBits = 8;

Fixed::Fixed(const int data) : rawBits(data * (1 << fractionalBits)){
    std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float data) : rawBits(roundf(data * (1 << fractionalBits))){
    std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed() {
    rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

std::ostream& operator<< (std::ostream &ost, Fixed fixed){
    ost << fixed.toFloat();
    return (ost);
}

float Fixed::toFloat( void ) const{
    return (rawBits >> fractionalBits);
}

int Fixed::toInt() const {
    return (rawBits >> fractionalBits);
}

Fixed::Fixed(const Fixed &oldObj) {
    std::cout << "Copy constructor called" << std::endl;
    Fixed::setRawBits(oldObj.getRawBits());
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &oldObj){
    std::cout << "Copy assignment operator called" << std::endl;
    Fixed::setRawBits(oldObj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits(const int raw) {
    rawBits = raw;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}