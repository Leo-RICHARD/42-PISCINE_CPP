#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.h"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
    public :

    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &, std::string const &);
    RobotomyRequestForm(RobotomyRequestForm const &);
    ~RobotomyRequestForm();
    virtual bool execute(Bureaucrat const &) const;

    RobotomyRequestForm &operator=(RobotomyRequestForm const &);
};
