#pragma once

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.h"

class Bureaucrat;

class Form
{
    std::string const _name;
    bool _signed;
    int	const _gradeToSign;
    int	const _gradeToExec;

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

    class FormAlreadySignedException : public std::exception
    {
	public :
	virtual const char *what() const throw();
    };

    Form();
    Form(std::string const &, int const &, int const &);
    Form(Form const &);
    ~Form();

    std::string const &getName() const;
    int const &getGradeToSign() const;    
    int const &getGradeToExec() const;    
    bool isSigned() const;
    void beSigned(Bureaucrat const &);

    Form &operator=(Form const &);
};

std::ostream &operator<<(std::ostream &, Form const &);
