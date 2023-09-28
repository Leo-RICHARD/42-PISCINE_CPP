#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("[target]", "[presidential pardon form]", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string const &target, std::string const &name) : Form(target, name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &model) : Form(model)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkPrerequisites(executor, getGradeToExec());
    std::cout << getTarget() << " was forgiven by Zaphod Beeblebrox" << std::endl;
    return (true);
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (rhs.isSigned())
	beSigned(Bureaucrat("", 1));
    return (*this);
}
