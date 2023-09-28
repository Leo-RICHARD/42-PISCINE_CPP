#pragma once

#include <iostream>

class	Animal
{
    protected :

    std::string _type;

    public :

    Animal();
    Animal(Animal const &);
    Animal(std::string const &);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const = 0;
    Animal &operator=(Animal const &);
};
