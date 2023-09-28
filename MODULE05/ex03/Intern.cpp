#include "Intern.h"

Intern::Intern()
{
    createForm[0] = &Intern::makeShrubberyCreationForm;
    createForm[1] = &Intern::makeRobotomyRequestForm;
    createForm[2] = &Intern::makePresidentialPardonForm;
    formType[0] = "shrubbery creation";
    formType[1] = "robotomy request";
    formType[2] = "presidential pardon";
}

Intern::Intern(Intern const &rhs)
{
    *this = rhs;
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
    for (int i = 0; i < 3; i++)
	if (name == formType[i])
	{
	    std::cout << "some random intern created a " << name << " form" << std::endl;
	    return ((this->*(createForm[i]))(name, target));
	}
    return (NULL);
}

Form	*Intern::makeShrubberyCreationForm(std::string const &name, std::string const &target)
{
    return (new ShrubberyCreationForm(target, name));
}

Form	*Intern::makeRobotomyRequestForm(std::string const &name, std::string const &target)
{
    return (new RobotomyRequestForm(target, name));
}

Form	*Intern::makePresidentialPardonForm(std::string const &name, std::string const &target)
{
    return (new PresidentialPardonForm(target, name));
}

Intern	&Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    createForm[0] = &Intern::makeShrubberyCreationForm;
    createForm[1] = &Intern::makeRobotomyRequestForm;
    createForm[2] = &Intern::makePresidentialPardonForm;
    formType[0] = "shrubbery creation";
    formType[1] = "robotomy request";
    formType[2] = "presidential pardon";
    return (*this);
}
