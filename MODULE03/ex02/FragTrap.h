#pragma once

#include <iostream>
#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    public :

    FragTrap();
    FragTrap(std::string const &);
    FragTrap(FragTrap const &);
    virtual ~FragTrap();
    void highFivesGuys();

    FragTrap &operator=(FragTrap const &);
};
