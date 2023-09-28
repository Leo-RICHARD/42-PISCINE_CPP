#include "Fixed.h"

int const Fixed::_nfb = 8;

Fixed::Fixed () : _n(0)
{
}

Fixed::Fixed (Fixed const &src)
{
    *this = src;
}

Fixed::Fixed (int const n)
{
    _n = n << 8;
}

Fixed::Fixed (float const f)
{
    _n = (int)roundf(f * (1 << _nfb)); 
}

Fixed::~Fixed ()
{
}

int	Fixed::getRawBits () const
{
    return (_n);
}

void	Fixed::setRawBits (int const raw)
{
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

Fixed	Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n2 < n1)
	return (n2);
    else
	return (n1);
}

Fixed	Fixed::min(Fixed const &n1, Fixed const &n2)
{
    Fixed nn1(n1);
    Fixed nn2(n2);

    if (nn2 < nn1)
	return (nn2);
    else
	return (nn1);
}

Fixed	Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n2 > n1)
	return (n2);
    else
	return (n1);
}

Fixed	Fixed::max(Fixed const &n1, Fixed const &n2)
{
    Fixed nn1(n1);
    Fixed nn2(n2);
    
    if (nn2 > nn1)
	return (nn2);
    else
	return (nn1);
}

Fixed	&Fixed::operator= (Fixed const &rhs)
{
    if (this != &rhs)
	_n = rhs.getRawBits();
    return (*this);
}

std::ostream	&operator<< (std::ostream &o, Fixed const &fxp)
{
    o << fxp.toFloat(); 
    return (o);
}

bool	Fixed::operator> (Fixed const &rhs)
{
    if (_n > rhs.getRawBits())
	return (true);
    else
	return (false);
}

bool	Fixed::operator< (Fixed const &rhs)
{
    if (_n < rhs.getRawBits())
	return (true);
    else
	return (false);
}

bool	Fixed::operator>= (Fixed const &rhs)
{
    if (_n >= rhs.getRawBits())
	return (true);
    else
	return (false);
}

bool	Fixed::operator<= (Fixed const &rhs)
{
    if (_n <= rhs.getRawBits())
	return (true);
    else
	return (false);
}

bool	Fixed::operator== (Fixed const &rhs)
{
    if (_n == rhs.getRawBits())
	return (true);
    else
	return (false);
}

bool	Fixed::operator!= (Fixed const &rhs)
{
    if (_n != rhs.getRawBits())
	return (true);
    else
	return (false);
}

Fixed	Fixed::operator+ (Fixed const &rhs)
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator- (Fixed const &rhs)
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator* (Fixed const &rhs)
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/ (Fixed const &rhs)
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator++ ()
{
    ++_n;
    return (*this);
}

Fixed	Fixed::operator-- ()
{
    --_n;
    return (*this);
}

Fixed	Fixed::operator++ (int i)
{
    (void)i;
    Fixed sv(*this);
    ++_n;
    return (sv);
}

Fixed	Fixed::operator-- (int i)
{
    (void)i;
    Fixed sv(*this);
    --_n;
    return (sv);
}
