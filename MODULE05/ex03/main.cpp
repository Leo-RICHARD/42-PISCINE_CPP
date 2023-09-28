#include "Bureaucrat.h"
#include "Intern.h"

int	main()
{
    Bureaucrat b("[chief minion]", 2);
    std::cout << b << " was created" << std::endl << std::endl;
    {
	std::cout << "- ";
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	b.signForm(*rrf);
	b.executeForm(*rrf);
	delete rrf;
    }
    {
	std::cout << std::endl;
	std::cout << "- ";
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	b.signForm(*rrf);
	b.executeForm(*rrf);
	delete rrf;
    }
    {
	std::cout << std::endl;
	std::cout << "- ";
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	b.signForm(*rrf);
	b.executeForm(*rrf);
	delete rrf;
    }
    return (0);
}
