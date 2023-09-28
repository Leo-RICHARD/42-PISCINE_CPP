#include "Cast.h"

int	main(int ac, char **av)
{
    if (ac != 2)
    {
	std::cout << "NOP you need to pass ONE (and only one - valid-) parameter" << std::endl;
	return (0);
    }
    Cast c;

    try 
    {
	c.storeConversions(av[1]);
	std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
	std::cerr << "Error : " << e.what() << std::endl;
    }

    return (0);
}
