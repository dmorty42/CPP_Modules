//
// Created by Darkside Morty on 1/31/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
    int                 value;
    static const int    bits = 8;
public:
    Fixed(void);
    Fixed(Fixed const &a);
    Fixed(const int n);
    Fixed(const float n);
    Fixed &operator=(Fixed const &a);
    ~Fixed(void);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
    float toFloat(void) const;
    int     toInt(void) const;
    bool operator>(const Fixed &a) const;
    bool operator>=(const Fixed &a);
    bool operator<(const Fixed &a);
    bool operator<=(const Fixed &a);
    bool operator==(const Fixed &a);
    bool operator!=(const Fixed &a);
    Fixed operator+(const Fixed &a);
    Fixed operator-(const Fixed &a);
    Fixed operator*(const Fixed &a);
    Fixed operator/(const Fixed &a);
    Fixed&  operator++();
    Fixed&  operator--();
    Fixed  operator++(int);
    Fixed  operator--(int);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(Fixed const& a, Fixed const& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(Fixed const& a, Fixed const& b);

};

std::ostream& operator <<(std::ostream &out, const Fixed &a);

#endif
