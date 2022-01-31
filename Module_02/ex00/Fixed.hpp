//
// Created by Darkside Morty on 1/31/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed {
private:
    int                 value;
    static const int    bits = 8;
public:
    Fixed(void);
    Fixed(Fixed const &a);
    Fixed &operator=(Fixed const &a);
    ~Fixed(void);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};


#endif
