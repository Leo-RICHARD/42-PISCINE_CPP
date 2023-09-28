#pragma once

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    public :

    ScavTrap();
    ScavTrap(std::string const &);
    ScavTrap(ScavTrap const &);
    virtual ~ScavTrap();
    void guardGate() const;

    ScavTrap &operator=(ScavTrap const &);
};
