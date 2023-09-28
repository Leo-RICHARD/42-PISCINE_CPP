#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> 

int	main(int ac, char **av)
{
    if (ac != 4)
	{
		std::cout << "Incorrect number of parameters" << std::endl;
		return (0);
	}

    std::size_t i = 0;
    std::string s;
    std::string stmp;
    std::string name = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

	if (s1.empty() == true)
	{
		std::cout << "s1 is empty" << std::endl;
		return (0);
	}
    std::ifstream file(name);
    if (!file.is_open())
    {
	std::cout << name << " could not be opened" << std::endl;
	return (0);
    }
    std::getline(file, s);
    while (std::getline(file, stmp))
	s += "\n" + stmp;
    file.close();
    while ((i = s.find(av[2], i)) != std::string::npos)
    {
	s.erase(i, s1.length());
	s.insert(i, av[3]);
	i += s2.length();
    }

    name += ".replace";
    std::ofstream file2(name);
    if (!file2.is_open())
    {
	std::cout << name << " could not be opened" << std::endl;
	return (0);
    }
    file2 << s;
    file2.close();
    return (0);
}
