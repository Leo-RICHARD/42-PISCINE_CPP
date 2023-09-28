#include "WrongDog.h"

WrongDog::WrongDog () : WrongAnimal("WrongDog") 
{
    std::cout << "Default constructor for WrongDog called" << std::endl;
}

WrongDog::WrongDog (WrongDog const &model) : WrongAnimal()
{
    std::cout << "Copy constructor for WrongDog called" << std::endl;
    *this = model;
}

WrongDog::~WrongDog ()
{
    std::cout << "Destructor for WrongDog called" << std::endl;
}

void	WrongDog::makeSound () const
{
    std::cout << "foow!" << std::endl;
}

WrongDog	&WrongDog::operator=(WrongDog const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
