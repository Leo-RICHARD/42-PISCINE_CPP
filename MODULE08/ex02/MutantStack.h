#pragma once

#include <deque>
#include <stack>

template < typename T, class Container = std::deque<T> >
class	MutantStack : public std::stack<T,Container>
{
    public :

    MutantStack() : std::stack<T, Container>()
    {
    }
    MutantStack(MutantStack const &src) : std::stack<T,Container>(src)
    {
    }
    ~MutantStack()
    {
    }

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin()
    {
	return (this->c.begin());
    }
    
    iterator end()
    {
	return (this->c.end());
    }

    const_iterator begin(int) const
    {
	return (this->c.begin());
    }

    const_iterator end(int) const
    {
	return (this->c.end());
    }
    
    MutantStack &operator=(MutantStack const &rhs)
    {
	std::stack<T,Container>::operator=(rhs);
	return (*this);
    }
};
