#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() : _name("[bureaucrat]"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name)
{
    if (grade < 1)
	throw(GradeTooHighException());
    else if (grade > 150)
	throw(GradeTooLowException());
    else
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &model) : _name(model.getName())
{
    *this = model;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	&Bureaucrat::getName() const
{
    return (_name);
}

int	Bureaucrat::getGrade() const
{
    return (_grade);
}

void	Bureaucrat::promote()
{
    if (_grade > 1)
	_grade--;
    else
	throw(GradeTooHighException());
}

void	Bureaucrat::demote()
{
    if (_grade < 150)
	_grade++;
    else
	throw(GradeTooLowException());
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
    _grade = rhs.getGrade();
    return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << '.';
    return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("an exceptional error occured : grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("an exceptional error occured : grade too low");
}
