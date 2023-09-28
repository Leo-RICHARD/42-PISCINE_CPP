#include "Weapon.h"

Weapon::Weapon() : _type("[weapon]")
{
}

Weapon::Weapon(std::string const &t) : _type(t)
{
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType() const
{
    return (_type);
}

void	Weapon::setType (std::string const &t)
{
    _type = t;
}
