#pragma once

#include "Animal.h"
#include "Brain.h"

class	Cat : public Animal
{
    Brain	*_brain;

    public :

    Cat();
    Cat(Cat const &);
    virtual ~Cat();
    virtual void makeSound() const;
    Brain getBrain() const;
    void giveIdea(std::string const &);
    std::string speakIdea(int const &) const;
    Cat &operator=(Cat const &);
};
