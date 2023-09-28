#pragma once

#include "Animal.h"

class	Dog : public Animal
{
    public :

    Dog();
    Dog(Dog const &);
    virtual ~Dog();
    virtual void makeSound() const;
    Dog &operator=(Dog const &);
};
