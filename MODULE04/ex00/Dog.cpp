#include "Dog.h"

Dog::Dog () : Animal("Dog")
{
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog (Dog const &model) : Animal()
{
    *this = model;
    std::cout << "Copy constructor for Dog called" << std::endl;
}

Dog::~Dog ()
{
    std::cout << "Destructor for Dog called" << std::endl;
}

void	Dog::makeSound () const
{
    std::cout << "woof!" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
