#include <iostream>
#include <vector>
#include <list>
#include "MutantStack.h"

int main()
{
    {
	std::cout << "MutantStack<int> :" << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
	std::stack<int> s(mstack);
    }
    std::cout << "" << std::endl << "-----------------" << std::endl << std::endl;
    {
	std::cout << "list<int> :" << std::endl << std::endl;
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
    }
    std::cout << "" << std::endl << "-----------------" << std::endl << std::endl;
    {
	std::cout << "vector<int> :" << std::endl << std::endl;
	std::vector<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
    }
    std::cout << "" << std::endl << "-----------------" << std::endl << std::endl;
    {
	std::cout << "MutantStack< int, vector<int> > :" << std::endl << std::endl;
	MutantStack< int, std::vector<int> > mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack< int, std::vector<int> >::iterator it = mstack.begin();
	MutantStack< int, std::vector<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
	    ++it;
	}
	std::stack< int, std::vector<int> > s(mstack);
    }
    return 0;
}
