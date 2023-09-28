#pragma once

#include "WrongAnimal.h"

class	WrongDog : public WrongAnimal
{
    public :

    WrongDog();
    WrongDog(WrongDog const &);
    virtual ~WrongDog();
    void makeSound() const;
    WrongDog &operator=(WrongDog const &);
};
