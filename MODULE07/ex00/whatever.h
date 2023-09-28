#pragma once

#include <iostream>

template <typename TYPE>
void swap(TYPE &a, TYPE &b)
{
    TYPE tmp = a;
    a = b;
    b = tmp;
}

template <typename TYPE>
TYPE min(TYPE const &a, TYPE const &b)
{
    return (b <= a ? b : a);
}

template <typename TYPE>
TYPE max(TYPE const &a, TYPE const &b)
{
    return (b >= a ? b : a);
}
