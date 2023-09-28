#pragma once

#include "Animal.h"

class	Cat : public Animal
{
    public :

    Cat();
    Cat(Cat const &);
    virtual ~Cat();
    virtual void makeSound() const;
    Cat &operator=(Cat const &);
};
