#pragma once

#include <iostream>

template <typename typeArg>
void do_smth(typeArg const &c)
{
    std::cout << c << std::endl;
}

template <typename typeA>
void iter(typeA *a, int s, void (*f)(typeA const &))
{
    for (int i = 0; i < s; i++)
	f(a[i]);
}
