#include "WrongCat.h"

WrongCat::WrongCat () : WrongAnimal("WrongCat") 
{
    std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat (WrongCat const &model) : WrongAnimal()
{
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    *this = model;
}

WrongCat::~WrongCat ()
{
    std::cout << "Destructor for WrongCat called" << std::endl;
}

void	WrongCat::makeSound () const
{
    std::cout << "Wronnnnwronn" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
