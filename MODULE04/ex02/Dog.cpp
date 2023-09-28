#include "Dog.h"

Dog::Dog () : Animal("Dog")
{
    std::cout << "Default constructor for Dog called" << std::endl;
    _brain = new Brain();
}

Dog::Dog (Dog const &model) : Animal(), _brain(0)
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = model;
}

Dog::~Dog ()
{
    std::cout << "Destructor for Dog called" << std::endl;
    delete _brain;
}

void	Dog::makeSound () const
{
    std::cout << "woof!" << std::endl;
}

Brain	Dog::getBrain () const
{
    return (*_brain);
}

void	Dog::giveIdea(std::string const &idea)
{
    _brain->setIdea(idea);
}

std::string	Dog::speakIdea(int const &i) const
{
    return (_brain->getIdea(i));
}

Dog	&Dog::operator=(Dog const &rhs)
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
