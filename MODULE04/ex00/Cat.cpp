#include "Cat.h"

Cat::Cat () : Animal("Cat")
{
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat (Cat const &model) : Animal()
{
    *this = model;
    std::cout << "Copy constructor for Cat called" << std::endl;
}

Cat::~Cat ()
{
    std::cout << "Destructor for Cat called" << std::endl;
}

void	Cat::makeSound () const
{
    std::cout << "i'm a talking cat" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
