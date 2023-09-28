#include "Form.h"

Form::Form() : _target(), _name("[form]"), _gradeToSign(150), _gradeToExec(150)
{
    _signed = false;
}

Form::Form(std::string const &target, std::string const &name, int const &gts, int const &gte) : _target(target), _name(name), _gradeToSign(gts), _gradeToExec(gte)
{
    _signed = false;
    if (gts < 1 || gte < 1)
	throw(GradeTooHighException());
    if (gts > 150 || gte > 150)
	throw(GradeTooLowException());
}

Form::Form(Form const &model) : _target(model.getTarget()), _name(model.getName()), _gradeToSign(model.getGradeToSign()), _gradeToExec(model.getGradeToExec())
{
    _signed = model.isSigned();
}

Form::~Form()
{
}

std::string const	&Form::getName() const
{
    return (_name);
}

int const	&Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int const	&Form::getGradeToExec() const
{
    return (_gradeToExec);
}

bool	Form::isSigned() const
{
    return (_signed);
}

std::string const	&Form::getTarget() const
{
    return (_target);
}

void	Form::beSigned(Bureaucrat const &b)
{
    if (_signed)
	throw(FormAlreadySignedException());
    if (b.getGrade() > _gradeToSign)
	throw(GradeTooLowException());
    _signed = true;
}

void	Form::checkPrerequisites(Bureaucrat const &b, int const &grade) const
{
    if (!_signed)
	throw(FormNotSignedException());
    if (b.getGrade() >= grade)
	throw(GradeTooLowException());
}

Form	&Form::operator=(Form const &rhs)
{
    _signed = rhs.isSigned();
    return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
    o << rhs.getName() << ", grade to sign : " << rhs.getGradeToSign() << ", grade to execute : " << rhs.getGradeToExec() << ", signed : ";
    if (rhs.isSigned())
	o << "yes";
    else
	o << "no";
    return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("an exceptional error occured : grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("an exceptional error occured : grade too low");
}

const char *Form::FormAlreadySignedException::what() const throw()
{
    return ("an exceptional error occured : form already signed");
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("an exceptional error occured : form not signed");
}
