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

Fixed::Fixed (int const n)
{
    std::cout << "Int constructor called" << std::endl;
    _n = n << 8;
}

Fixed::Fixed (float const f)
{
    std::cout << "Float constructor called" << std::endl;
    _n = (int)roundf(f * (1 << _nfb)); 
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits () const
{
    return (_n);
}

void	Fixed::setRawBits (int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _n = raw;
}

int	Fixed::toInt() const
{
    return (_n >> 8);
}

float	Fixed::toFloat() const
{
    return (_n / (float)(1 << _nfb));
}

Fixed	&Fixed::operator= (Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
	_n = rhs.getRawBits();
    return (*this);
}

std::ostream	&operator<< (std::ostream &o, Fixed const &fxp)
{
    o << fxp.toFloat(); 
    return (o);
}
