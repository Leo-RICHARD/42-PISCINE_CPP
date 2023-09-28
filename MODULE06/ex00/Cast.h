#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <limits>

class	Cast
{
    char _c;
    int _i;
    float _f;
    double _d;
    char _type;
    bool _p[2];

    void figureTypeOut(std::string const &);

    public :

    Cast();
    Cast(Cast const &);
    ~Cast();

    char getChar() const;
    int getInt() const;
    float getFloat() const;
    double getDouble() const;
    bool get_p(int const &) const;

    void storeConversions(const char *);

    Cast &operator=(Cast const &);
};

std::ostream &operator<<(std::ostream &o, Cast const &);
