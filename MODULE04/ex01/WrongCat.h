#pragma once

#include "WrongAnimal.h"

class	WrongCat : public WrongAnimal
{
    public :

    WrongCat();
    WrongCat(WrongCat const &);
    virtual ~WrongCat();
    void makeSound() const;
    WrongCat &operator=(WrongCat const &);
};
