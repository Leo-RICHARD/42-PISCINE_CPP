#pragma once

#include <iostream>

class Weapon
{
    std::string _type;

    public :
    
    Weapon();
    Weapon(std::string const &);
    ~Weapon(void);
    std::string const &getType(void) const;
    void setType(std::string const &);
};
