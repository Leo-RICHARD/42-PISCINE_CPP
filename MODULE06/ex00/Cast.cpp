#include "Cast.h"

Cast::Cast() : _c(0), _i(0), _f(0), _d(0), _type('n')
{
    _p[0] = true;
    _p[1] = true;
}

Cast::Cast(Cast const &rhs)
{
    *this = rhs;
}

Cast::~Cast()
{
}

char	Cast::getChar() const
{
    return (_c);
}

int	Cast::getInt() const
{
    return (_i);
}

float	Cast::getFloat() const
{
    return (_f);
}

double	Cast::getDouble() const
{
    return (_d);
}

bool	Cast::get_p(int const &i) const
{
    return (_p[i]);
}

void	Cast::figureTypeOut(std::string const &s)
{
    _p[0] = true;
    _p[1] = true;
    _type = 'n';

    if (s.size() > 1 || (s[0] > 47 && s[0] < 58))
    {
	if (s == "nan" || s == "nanf" || s == "+inf" || s == "+inff" || s == "-inf" || s == "-inff")
	{
	    _p[0] = false;
	    _p[1] = false;
	    if (s == "nan")
		_d = std::numeric_limits<double>::quiet_NaN();
	    else if (s == "nanf")
		_f = std::numeric_limits<float>::quiet_NaN();
	    else if (s == "+inf")
		_d = std::numeric_limits<double>::infinity();
	    else if (s == "+inff")
		_f = std::numeric_limits<float>::infinity();
	    else if (s == "-inf")
		_d = -std::numeric_limits<double>::infinity();
	    else if (s == "-inff")
		_f = -std::numeric_limits<float>::infinity();
	    return;
	}
	if (s.find(".") == std::string::npos && s.find("f") == std::string::npos)
	{
	    _type = 'i';
	    _i = stoi(s);
	    return;
	}
	if (s.find("f") != std::string::npos)
	{
	    _type = 'f';
	    _f = stof(s);
	    return;
	}
	_type = 'd';
	_d = stod(s);
	return;
    }
    _type = 'c';
    _c = s[0];
}

void	Cast::storeConversions(const char *s)
{
    figureTypeOut(std::string(s));
    if (_type == 'c')
    {
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
    }
    else if (_type == 'i')
    {
	_c = static_cast<char>(_i);
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);

    }
    else if (_type == 'f')
    {
	_c = static_cast<char>(_f);
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);

    }
    else
    {
	_c = static_cast<char>(_d);
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
    }
}

Cast	&Cast::operator=(Cast const &rhs)
{
    _c = rhs._c;
    _i = rhs._i;
    _f = rhs._f;
    _d = rhs._d;
    _type = rhs._type;

    _p[0] = rhs._p[0];
    _p[1] = rhs._p[1];

    return (*this);
}

std::ostream	&operator<<(std::ostream &o, Cast const &rhs)
{
   o << "char: ";
   if (!rhs.get_p(0))
       o << "impossible" << std::endl;
   else if (std::isprint(rhs.getChar()))
       o << rhs.getChar() << std::endl;
   else
       o << "non displayable" << std::endl;
   o << "int: ";
   if (!rhs.get_p(1))
       o << "impossible" << std::endl;
   else
       o << rhs.getInt() << std::endl;
   o << "float: " << rhs.getFloat();
   if (!(rhs.getFloat() - static_cast<int>(rhs.getFloat())) && !isinf(rhs.getFloat()) && !isnan(rhs.getFloat()))
       o << ".0";
   o << 'f' << std::endl;
   o << "double: " << rhs.getDouble();
   if (!(rhs.getDouble() - static_cast<int>(rhs.getDouble())) && !isinf(rhs.getDouble()) && !isnan(rhs.getDouble()))
       o << ".0";
    return (o);
}
