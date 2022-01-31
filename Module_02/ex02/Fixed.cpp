//
// Created by Darkside Morty on 1/31/22.
//

#include "Fixed.hpp"

Fixed::Fixed() {
    value = 0;
}

Fixed::Fixed(const Fixed &a) {
    *this = a;
}

Fixed::Fixed(const int n) {
    value = (n << bits);
    if (n > (INT_MAX >> bits))
        std::cout << "Warning: undefined behavior. Value is bigger than Fixed_Max("
        << (INT_MAX >> bits) << ")" << std::endl;
}

Fixed::Fixed(const float n) {
    value = (roundf(n * (1 << bits)));
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
    return (*this);
}

Fixed::~Fixed() {
}

int Fixed::getRawBits() const {
    return (this->value);
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
}

std::ostream& operator<<(std::ostream &out, const Fixed &a) {
    out << a.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &a) const {
    return (value > a.value);
}

bool Fixed::operator>=(const Fixed &a) {
    return (value >= a.value);
}

bool Fixed::operator<(const Fixed &a) {
    return (value < a.value);
}

bool Fixed::operator<=(const Fixed &a) {
    return (value <= a.value);
}

bool Fixed::operator==(const Fixed &a) {
    return (value == a.value);
}

bool Fixed::operator!=(const Fixed &a) {
    return (value != a.value);
}

Fixed Fixed::operator+(const Fixed &a) {
    return (Fixed(this->getRawBits() + a.getRawBits()));
}

Fixed Fixed::operator-(const Fixed &a) {
    return (Fixed(this->getRawBits() + a.getRawBits()));
}

Fixed Fixed::operator*(const Fixed &a) {
    return (Fixed(this->toFloat() * a.toFloat()));
}

Fixed Fixed::operator/(const Fixed &a) {
    return (Fixed(this->toFloat() / a.toFloat()));
}

Fixed&  Fixed::operator++() {
    ++value;
    return (*this);
}

Fixed&  Fixed::operator--() {
    --value;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return (temp);
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);
    return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a > b)
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a > b)
        return (b);
    return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return (a);
    return (b);
}




