#pragma once

#include "Weapon.h"

class HumanB
{
    std::string _name;
    Weapon *_weap;

    public :

    HumanB();
    HumanB(std::string const &, Weapon * = 0);
    ~HumanB(void);
    void setWeapon(Weapon);
    void attack(void) const;
};
