#include "Span.h"

Span::Span()
{
}

Span::Span(unsigned int const &s)
{
    _elements.reserve(s);
}

Span::Span(Span const &rhs)
{
    *this = rhs;
}

Span::~Span()
{
}

void	Span::addNumber(int const &n)
{
    _elements.push_back(n);
}

void	Span::addNumbers(int const a[], unsigned int const &size)
{
    _elements.insert(_elements.end(), a, a + size);
}

int	Span::shortestSpan() const
{
    unsigned int span = 0;
    unsigned int shortest = ~0;
    std::vector<int> tmp = _elements;

    if (_elements.size() < 2)
	throw(std::logic_error("not enough numbers to calculate any span"));
  
    sort(tmp.begin(), tmp.end());
    
    for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end() - 1; i++)
    {
	span = std::abs(*i - *(i + 1));
	shortest = (span < shortest) ? span : shortest;
    }
    
    return (static_cast<int>(shortest));
}

int	Span::longestSpan() const
{
    std::vector<int> tmp = _elements;
    
    if (_elements.size() < 2)
	throw(std::logic_error("not enough numbers to calculate any span"));
    
    sort(tmp.begin(), tmp.end());

    return (std::abs(*tmp.begin() - *(tmp.end() - 1)));
}

Span	&Span::operator=(Span const &rhs)
{
    _elements = rhs._elements;
    return (*this);
}

int	&Span::operator[](unsigned int const &i)
{
    if (i < _elements.size())
	return (_elements[i]);
    else
	throw(std::out_of_range("index is past the end of the array"));
}
