#pragma once

#include <iostream>

class	Harl
{
    void (Harl::*harlkit[4])() const;
    std::string lvls[4];

    public :

    Harl();
    ~Harl();
    void debug() const;
    void info() const;
    void warning() const;
    void error() const;
    void complain(std::string) const;
};
