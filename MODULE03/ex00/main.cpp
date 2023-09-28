#include "ClapTrap.h"

int	main()
{
    ClapTrap clappy("Clappy");
    ClapTrap anotherone;

    anotherone.attack(clappy.getName());
    clappy.takeDamage(anotherone.getAttackDamage());
    clappy.beRepaired(1);
    clappy.attack(anotherone.getName());
    anotherone.takeDamage(clappy.getAttackDamage());
    
    return (0);
}
