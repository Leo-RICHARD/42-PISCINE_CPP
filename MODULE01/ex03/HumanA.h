#pragma once

#include "Weapon.h"

class HumanA
{
    std::string _name;
    Weapon &_weap;

    public :

    HumanA(std::string const &, Weapon &);
    ~HumanA(void);
    void attack(void) const;
};
