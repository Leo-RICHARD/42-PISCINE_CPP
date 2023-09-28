#pragma once

#include <iostream>

class	WrongAnimal
{
    protected :

    std::string _type;

    public :

    WrongAnimal();
    WrongAnimal(WrongAnimal const &);
    WrongAnimal(std::string const &);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
    WrongAnimal &operator=(WrongAnimal const &);
};
