#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
    if (ac == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
	while (++av && *av)
	{
	    while (**av)
	    {
		std::cout << (char)toupper(**av);
		(*av)++;
	    }
	}
    }
    std::cout << std::endl;
    return 0;
}
