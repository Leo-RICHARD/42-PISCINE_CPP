#pragma once

#include <iostream>
#include <stdexcept>
#include "Form.h"

class Form;

class Bureaucrat
{
    std::string const _name;
    int _grade;
   
    public :
    
    class GradeTooHighException : public std::exception
    {
	public :
	virtual const char *what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
	public :
	virtual const char *what() const throw();
    };

    Bureaucrat();
    Bureaucrat(std::string const &, int const &);
    Bureaucrat(Bureaucrat const &model);
    ~Bureaucrat();

    int getGrade() const;
    std::string const &getName() const;
    void promote();
    void demote();
    void signForm(Form &) const;

    Bureaucrat &operator=(Bureaucrat const &rhs);
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &rhs);
