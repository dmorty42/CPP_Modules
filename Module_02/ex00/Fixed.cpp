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