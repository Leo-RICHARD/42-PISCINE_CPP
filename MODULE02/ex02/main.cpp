#include <iostream>
#include "Fixed.h"
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;

std::cout << std::endl << "*additional tests*" << std::endl << std::endl;

Fixed n, n2(0.5f);
Fixed const n3(1), n4(2);

if (Fixed::min(n, n2) == n && Fixed::min(n3, n4) == n3 && \
    Fixed::max(n, n2) == n2 && Fixed::max(n3, n4) == n4)
    std::cout << "min and max functions working" << std::endl;
if (n < n2 && n2 > n && n != n2)
    std::cout << "< and > and != operators working" << std::endl;
n = 0.5f;
if (n == 0.5f && n >= n2 && n <= n2)
    std::cout << "= and == and >= and <= operators working" << std::endl;
n = n + n2;
if (n == 1 && n == n2 * 2 && n == (n2 * 4) / 2)
    std::cout << "+ and - and * and / operators working" << std::endl;
if (n++ == 1)
    std::cout << "postfix ++ operator working" << std::endl;
if (--n == 1)
    std::cout << "prefix -- operator working" << std::endl;
if (++n > 1)
    std::cout << "prefix ++ operator working" << std::endl;
if (n-- > 1)
    std::cout << "postfix -- operator working" << std::endl;

return 0;
}
