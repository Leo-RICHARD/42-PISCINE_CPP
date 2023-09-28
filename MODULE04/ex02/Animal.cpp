#include "Animal.h"

Animal::Animal () : _type("Animal") 
{
    std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal (Animal const &model) : _type(model.getType())
{
    std::cout << "Copy constructor for Animal called" << std::endl;
}

Animal::Animal (std::string const &type) : _type(type)
{
    std::cout << "Parametric constructor for Animal called" << std::endl;
}

Animal::~Animal ()
{
    std::cout << "Destructor for Animal called" << std::endl;
}

std::string	Animal::getType () const
{
    return (_type);
}

void	Animal::makeSound () const
{
    std::cout << "grrrr" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
