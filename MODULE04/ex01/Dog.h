#pragma once

#include "Animal.h"
#include "Brain.h"

class	Dog : public Animal
{
    Brain	*_brain;

    public :

    Dog();
    Dog(Dog const &);
    virtual ~Dog();
    virtual void makeSound() const;
    Brain getBrain() const;
    void giveIdea(std::string const &);
    std::string speakIdea(int const &) const;
    Dog &operator=(Dog const &);
};
