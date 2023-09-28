#include "Cat.h"

Cat::Cat () : Animal("Cat")
{
    std::cout << "Default constructor for Cat called" << std::endl;
    _brain = new Brain();
}

Cat::Cat (Cat const &model) : Animal(), _brain(0)
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = model;
}

Cat::~Cat ()
{
    std::cout << "Destructor for Cat called" << std::endl;
    delete _brain;
}

void	Cat::makeSound () const
{
    std::cout << "i'm a talking cat" << std::endl;
}

Brain	Cat::getBrain () const
{
    return (*_brain);
}

void	Cat::giveIdea(std::string const &idea)
{
    _brain->setIdea(idea);
}

std::string	Cat::speakIdea(int const &i) const
{
    return (_brain->getIdea(i));
}

Cat	&Cat::operator=(Cat const &rhs)
{
    if (_brain)
	delete _brain;
    if (this != &rhs)
    {
	_type = rhs.getType();
	_brain = new Brain (rhs.getBrain());
    }
    return (*this);
}
