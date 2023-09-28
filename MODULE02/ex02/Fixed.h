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
    int getRawBits(void) const;
    void setRawBits(int const);
    int toInt(void) const;
    float toFloat(void) const;
    static Fixed min(Fixed &, Fixed &);
    static Fixed min(Fixed const &, Fixed const &);
    static Fixed max(Fixed &, Fixed &);
    static Fixed max(Fixed const &, Fixed const &);
    
    Fixed &operator=(Fixed const &);
    bool operator==(Fixed const &);
    bool operator!=(Fixed const &);
    bool operator>(Fixed const &);
    bool operator<(Fixed const &);
    bool operator>=(Fixed const &);
    bool operator<=(Fixed const &);
    Fixed operator+(Fixed const &);
    Fixed operator-(Fixed const &);
    Fixed operator*(Fixed const &);
    Fixed operator/(Fixed const &);
    Fixed operator++(int);
    Fixed operator++();
    Fixed operator--(int);
    Fixed operator--();
};

std::ostream &operator<<(std::ostream &, Fixed const &);
