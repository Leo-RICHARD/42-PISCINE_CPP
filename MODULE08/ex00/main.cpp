#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include "easyfind.h"

int	main()
{
    std::list<int> l;
    std::vector<int> v(10, 5);

    l.push_back(2);
    l.push_back(2);
    l.push_back(2);
    l.push_back(3);
    v[3] = 3;

    if (*easyfind(l, 3) == 3 && *easyfind(v, 3) == 3 && (easyfind(l, 4) == l.end() && easyfind(v, 4) == v.end()))
	std::cout << "All good" << std::endl;
    return (0);
}
