#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Classes.h"

Base::~Base() {}
A::~A() {}
B::~B() {}
C::~C() {}

Base	*generate(void)
{
    srand(time(0));

    int r = rand() % 3;

    if (r == 0)
    {
	std::cout << "generate() will return a pointer to an A instance" << std::endl;	
	return (new A());
    }
    else if (r == 1)
    {
	std::cout << "generate() will return a pointer to a B instance" << std::endl;	
	return (new B());
    }
    else
    {
	std::cout << "generate() will return a pointer to a C instance" << std::endl;	
	return (new C());
    }
}

void	identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    if (a)
    {
	std::cout << "pointer on A instance identified" << std::endl;
	return;
    }
    C *c = dynamic_cast<C *>(p);
    if (c)
    {
	std::cout << "pointer on C instance identified" << std::endl;
	return;
    }
    std::cout << "pointer on B instance identified" << std::endl;
}

void	identify(Base& p)
{
    try
    {
	A a = dynamic_cast<A &>(p);
	std::cout << "reference on A instance identified" << std::endl;
	return;
    }
    catch (std::bad_cast &e)
    {
	std::cout << "conversion went wrong : " << e.what() << std::endl;
    }
    try
    {
	B b = dynamic_cast<B &>(p);
	std::cout << "reference on B instance identified" << std::endl;
	return;
    }
    catch (std::bad_cast &e)
    {
	std::cout << "conversion went wrong : " << e.what() << std::endl;
    }
    std::cout << "reference on C instance identified" << std::endl;
}

int	main()
{
    Base *p = generate();
   
    identify(p);
    identify(*p);
    
    delete p;

    return (0);
}
