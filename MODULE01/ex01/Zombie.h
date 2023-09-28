#include <iostream>

class	Zombie
{
    std::string name;

    public :

    Zombie();
    Zombie(std::string const&);
    ~Zombie(void);
    void setname(std::string const &);
    void announce(void) const;
};

Zombie	*zombieHorde(int, std::string);
