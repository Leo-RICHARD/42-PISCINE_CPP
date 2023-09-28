#include <iostream>
#include "ContactClass.h"

Contact::Contact ()
{
}

Contact::~Contact ()
{
}

std::string Contact::getFirstName () const
{
    return (first_name);
}

std::string Contact::getLastName () const
{
    return (last_name);
}

std::string Contact::getNickname () const
{
    return (nickname);
}

std::string Contact::getPhoneNumber () const
{
    return (phone_number);
}

std::string Contact::getDarkestSecret () const
{
    return (darkest_secret);
}

std::string	Contact::enterContactField (std::string field) const
{
    std::string uinput;

    std::cout << field << " : ";
    while (uinput == "")
	getline(std::cin, uinput);
    return (uinput);
}

void	Contact::fillContactFields ()
{ 
    first_name = enterContactField("First name");
    last_name = enterContactField("Last Name");
    nickname = enterContactField("Nickname");
    phone_number = enterContactField("Phone number");
    darkest_secret = enterContactField("Darkest secret");
}
