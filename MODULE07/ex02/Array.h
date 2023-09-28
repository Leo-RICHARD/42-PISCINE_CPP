#pragma once

template <typename T>
class	Array
{
    unsigned int _size;
    T *_elements;

    public :

    Array()
    {
	_size = 0;
	_elements = NULL;
    }
    Array(unsigned int const &s)
    {
	_elements = new T[s];
	_size = s;
    }
    Array(Array const &rhs)
    {
	_elements = NULL;
	*this = rhs;
    }
    ~Array()
    {
	if (_elements)
	    delete [] _elements;
    }

    unsigned int size() const
    {
	return (_size);
    }

    Array &operator=(Array const &rhs)
    {
	unsigned int s = rhs.size();
	_size = s;
	if (_elements)
	    delete [] _elements;
	_elements = new T[s];
	while (s--)
	    _elements[s] = rhs._elements[s];
	return (*this);
    }

    T	&operator[](unsigned int const &i)
    {
	if (i >= _size)
	    throw(std::out_of_range("index is past the end of the array"));
	return (_elements[i]);
    }
};
