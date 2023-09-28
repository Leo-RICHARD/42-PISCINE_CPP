#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << _name << " was constructed (ScavTrap constructor)" << std::endl;
    _name = ("[unnamed SC4V-TP unit]");
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;  
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << _name << " was constructed (ScavTrap constructor)" << std::endl;
    _hitpoints = 100;
    _energypoints = 50;
    _attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &model) : ClapTrap()
{
    *this = model; 
    std::cout << _name << " was constructed (ScavTrap constructor)" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << _name << " was destroyed (ScavTrap destructor)" << std::endl;
}

void	ScavTrap::guardGate() const
{
    std::cout << _name << " entered Gate keeper mode" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
    {
	_name = rhs.getName();
	_hitpoints = rhs.getHitPoints();
	_energypoints = rhs.getEnergyPoints();
	_attackdamage = rhs.getAttackDamage();
    }
    return (*this);
}
