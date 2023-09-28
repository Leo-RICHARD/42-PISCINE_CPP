#include <iostream>
#include "PhoneBookClass.h"
#include "ContactClass.h"

int	main ()
{
    std::string uinput;
    PhoneBook phonebook;

    while (1)
    {
	getline(std::cin, uinput);
	if (uinput == "ADD")
	    phonebook.addContact(); 
	else if (uinput == "SEARCH")
	    phonebook.searchContact();
	else if (uinput == "EXIT")
	    return 0;
    }
}
