#include "Brain.h"

Brain::Brain ()
{
    std::cout << "Default constructor for Brain called" << std::endl;
}

Brain::Brain (Brain const &model)
{
    *this = model;
    std::cout << "Copy constructor for Brain called" << std::endl;
}

Brain::~Brain ()
{
    std::cout << "Destructor for Brain called" << std::endl;
}

std::string	Brain::getIdea (int const &i) const
{
    return (_ideas[i]);
}

void	Brain::setIdea (std::string const &idea)
{
    for (int i = 0; i < 100; i++)
	if (_ideas[i] == "")
	    _ideas[i] = idea;
}

Brain	&Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
	for (int i = 0; i < 100; i++)
	    _ideas[i] = rhs.getIdea(i);
    }
    return (*this);
}
