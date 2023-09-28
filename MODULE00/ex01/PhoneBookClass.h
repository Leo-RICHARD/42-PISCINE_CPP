#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "ContactClass.h"

class PhoneBook
{
    Contact	contacts[8];
    int		addindex;

    public :

    PhoneBook();
    ~PhoneBook();
    void addContact();
    void displayContact(int) const;
    void showContacts() const;
    void searchContact() const;
};

#endif
