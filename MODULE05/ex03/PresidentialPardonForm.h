#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.h"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    public :

    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &, std::string const &);
    PresidentialPardonForm(PresidentialPardonForm const &);
    ~PresidentialPardonForm();
    virtual bool execute(Bureaucrat const &) const;

    PresidentialPardonForm &operator=(PresidentialPardonForm const &);
};
