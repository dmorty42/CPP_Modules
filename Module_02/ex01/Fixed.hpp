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
};

std::ostream& operator <<(std::ostream &out, const Fixed &a);

#endif
