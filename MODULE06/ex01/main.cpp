#include <iostream>
#include <stdint.h>
#include "data.h"

uintptr_t	serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int	main()
{
    Data data;

    data.i = 3;
    Data *p = deserialize(serialize(&data));
    if (p == &data && p->i == 3)
	std::cout << "All good" << std::endl;
    return (0);
}
