#include "WrongAnimal.h"

WrongAnimal::WrongAnimal () : _type("WrongAnimal") 
{
    std::cout << "Default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal (WrongAnimal const &model) : _type(model.getType())
{
    std::cout << "Copy constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal (std::string const &type) : _type(type)
{
    std::cout << "Parametric constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal ()
{
    std::cout << "Destructor for WrongAnimal called" << std::endl;
}

std::string	WrongAnimal::getType () const
{
    return (_type);
}

void	WrongAnimal::makeSound () const
{
    std::cout << "[no sound is heard]" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (this != &rhs)
    {
	_type = rhs.getType();
    }
    return (*this);
}
