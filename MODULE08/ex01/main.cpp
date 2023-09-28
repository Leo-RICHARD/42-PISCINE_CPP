#include <ctime>
#include <cstdlib>
#include "Span.h"

int	gen()
{
    return (rand() % 10000); 
}

int	main()
{
    {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    }
    
    Span sp = Span();
    
    try
    {
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
	std::cout << "Error : " << e.what() << std::endl;
    }
    srand(time(0));
    
    int array[] = { 1, 2, 3, 4 };
    sp.addNumbers(array, sizeof(array) / sizeof(array[0]));

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    Span spp;

    int array2[10000] = { 0 };
    std::generate(array2, array2 + 10000, gen);

    spp.addNumbers(array2, sizeof(array2) / sizeof(array2[0]));

    std::cout << spp.shortestSpan() << std::endl;
    std::cout << spp.longestSpan() << std::endl;
    
    return (0);
}
