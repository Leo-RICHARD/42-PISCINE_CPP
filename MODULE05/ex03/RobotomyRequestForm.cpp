#include "RobotomyRequestForm.h"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("[target]", "[robotomy request form]", 72, 45)
{
    srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target, std::string const &name) : Form(target, name, 72, 45)
{
    srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &model) : Form(model)
{
    srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkPrerequisites(executor, getGradeToExec());
    std::cout << "DRIIIIIIIILLLL ***drilling sounds***" << std::endl;
    if (rand() % 2)
    {
	std::cout << "operation was a success : " << getTarget() << " has been robotomized" << std::endl;
	return (true);
    }
    else
    {
	std::cout << "operation was a failure : " << getTarget() << " died" << std::endl;
	return (false);
    }
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (rhs.isSigned())
	beSigned(Bureaucrat("", 1));
    return (*this);
}
