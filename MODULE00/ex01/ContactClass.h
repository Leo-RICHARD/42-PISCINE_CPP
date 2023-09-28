#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name; 
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public :

    Contact();
    ~Contact();
    std::string getFirstName () const;
    std::string getLastName () const;
    std::string getNickname () const;
    std::string getPhoneNumber () const;
    std::string getDarkestSecret () const;
    std::string	enterContactField (std::string) const;
    void	fillContactFields ();
};

#endif
