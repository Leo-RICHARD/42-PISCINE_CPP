#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <algorithm>

class	Span
{
    std::vector<int> _elements;

    public :

    Span();
    Span(unsigned int const &);
    Span(Span const &);
    ~Span();

    void addNumber(int const &);
    void addNumbers(int const [], unsigned int const &);
    int shortestSpan() const;
    int longestSpan() const;

    Span &operator=(Span const &);
    int &operator[](unsigned int const &);
};
