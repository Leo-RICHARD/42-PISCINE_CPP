#pragma once

#include <iostream>
#include <stdexcept>
#include <fstream>
#include "Form.h"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    public :

    class NoShrubberyException : public std::exception
    {
	public :
	virtual const char *what() const throw();
    };

    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const &, std::string const &);
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ~ShrubberyCreationForm();
    virtual bool execute(Bureaucrat const &) const;

    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
};
