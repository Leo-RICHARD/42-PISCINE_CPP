#include "Fixed.h"

int const Fixed::_nfb = 8;

Fixed::Fixed () : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits () const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_n);
}

void	Fixed::setRawBits (int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _n = raw;
}

Fixed	&Fixed::operator= (Fixed const &rhs)
{

    std::cout << "Copy assignment operator called" << std::endl;
    _n = rhs.getRawBits();
    return (*this);
}
