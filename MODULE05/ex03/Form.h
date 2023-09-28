#pragma once

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.h"

class Bureaucrat;

class Form // ABSTRACT
{
    std::string const _target;
    std::string const _name;
    int	const _gradeToSign;
    int	const _gradeToExec;
    bool _signed;

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
    
    class FormNotSignedException : public std::exception
    {
	public :
	virtual const char *what() const throw();
    };

    Form();
    Form(std::string const &, std::string const &, int const &, int const &);
    Form(Form const &);
    virtual ~Form();

    std::string const &getName() const;
    int const &getGradeToSign() const; 
    int const &getGradeToExec() const;
    std::string const &getTarget() const;
    bool isSigned() const;
    void beSigned(Bureaucrat const &);
    void checkPrerequisites(Bureaucrat const &, int const &) const;
    virtual bool execute(Bureaucrat const &) const = 0;

    Form &operator=(Form const &);
};

std::ostream &operator<<(std::ostream &, Form const &);
