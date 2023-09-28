#pragma once

#include <iostream>

class	Fixed
{
    int _n;
    static int const _nfb;

    public :

    Fixed(void);
    Fixed(Fixed const &);
    ~Fixed(void);
    Fixed &operator=(Fixed const &);
    int getRawBits(void) const;
    void setRawBits(int const);
};
