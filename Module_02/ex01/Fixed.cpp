//
// Created by Darkside Morty on 1/31/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a) {
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::Fixed(const int n) {
    value = (n << bits);
    std::cout << "Int constructor called" << std::endl;
    if (n > (INT_MAX >> bits))
        std::cout << "Warning: undefined behavior. Value is bigger than Fixed_Max("
        << (INT_MAX >> bits) << ")" << std::endl;
}

Fixed::Fixed(const float n) {
    value = (roundf(n * (1 << bits)));
    std::cout << "Float constructor called" << std::endl;
    if (n > (INT_MAX >> bits))
        std::cout << "Warning: undefined behavior. Value is bigger than Fixed_Max("
                  << (INT_MAX >> bits) << ")" << std::endl;
}

float Fixed::toFloat() const {
    return ((float)value / (float)(1 << bits));
}

int Fixed::toInt() const {
    return ((int)(value >> bits));
}

Fixed &Fixed::operator=(const Fixed &a) {
    value = a.getRawBits();
    std::cout << "Copy assigment operator called" << std::endl;
    return (*this);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Fixed &a) {
    out << a.toFloat();
    return (out);
}