#pragma once

#include <iostream>
#include <fstream>
#include <cmath>

class	Fixed
{
    int _n;
    static int const _nfb;

    public :

    Fixed(void);
    Fixed(Fixed const &);
    Fixed(int const);
    Fixed(float const);
    ~Fixed(void);
    Fixed &operator=(Fixed const &);
    int getRawBits(void) const;
    void setRawBits(int const);
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &, Fixed const &);
