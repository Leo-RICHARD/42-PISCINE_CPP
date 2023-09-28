#pragma once

#include <iostream>

class ClapTrap
{
    std::string _name;
    int _hitpoints;
    int _energypoints;
    int _attackdamage;

    public :

    ClapTrap();
    ClapTrap(std::string const &);
    ClapTrap(ClapTrap const &);
    virtual ~ClapTrap();
    std::string	getName() const;
    void setName(std::string const &);
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
    void attack(const std::string&);
    void takeDamage(unsigned int);
    void beRepaired(unsigned int);

    ClapTrap &operator=(ClapTrap const &);
};
