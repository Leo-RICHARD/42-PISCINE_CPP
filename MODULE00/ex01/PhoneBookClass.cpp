#include <iostream>
#include <iomanip>
#include "PhoneBookClass.h"
#include "ContactClass.h"

PhoneBook::PhoneBook ()
{
    addindex = -1;
}

PhoneBook::~PhoneBook ()
{
}

void	PhoneBook::addContact()
{
    Contact new_contact;

    std::cout << '\n';
    addindex++;
    new_contact.fillContactFields();
    contacts[addindex] = new_contact;
    if (addindex == 7)
	addindex = -1;
    std::cout << '\n';
}

void	PhoneBook::displayContact(int i) const
{
	std::cout << "First name : " << contacts[i].getFirstName() << '\n';
	std::cout << "Last name : " << contacts[i].getLastName() << '\n';
	std::cout << "Nickname : " << contacts[i].getNickname() << '\n';
	std::cout << "Phone number : " << contacts[i].getPhoneNumber() << '\n';
	std::cout << "Darkest secret : " << contacts[i].getDarkestSecret() << '\n';
}

std::string	trunc(std::string str)
{
    if (str.length() > 9)
    {
	str.resize(11);
	if (str[10])
	    str[9] = '.';
	str.resize(10);
    }
    return (str);
}

void	PhoneBook::showContacts() const
{
    for (int i = 0; (i < 8 && contacts[i].getFirstName() != ""); i++)
    {
	std::cout << '\n' << i << "         |";
	std::cout << std::left << std::setw(10) << trunc(contacts[i].getFirstName());
	std::cout << '|';
	std::cout << std::left << std::setw(10) << trunc(contacts[i].getLastName());
	std::cout << '|';
	std::cout << std::left << std::setw(10) << trunc(contacts[i].getNickname());
    }
}

void	PhoneBook::searchContact() const
{
    bool	non_digit_input = 0;
    std::string contact_number;

    if (contacts[0].getFirstName() == "")
    {
	std::cout << "\nThe contact list is empty\n\n";
	return;
    }
    showContacts();
    std::cout << "\n\nEnter a contact number to display all its informations : ";
    while (1)
    {
	non_digit_input = 0;
	std::cout << '\n';
	getline(std::cin, contact_number);
	for (int i = 0; contact_number[i]; i++)
	    if (!std::isdigit(contact_number[i]))
		non_digit_input = 1;
	if (non_digit_input || !contact_number[0] || \
	    contact_number.length() > 1 || contact_number[0] > '7' || \
	    contacts[std::stoi(contact_number)].getFirstName() == "")
	    std::cout << "Invalid contact number, please try again";
	else
	    break;
    }
    std::cout << '\n';
    displayContact(std::stoi(contact_number));
    std::cout << '\n';
}
