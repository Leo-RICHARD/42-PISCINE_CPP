#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int	main()
{
    std::cout << "- Creation of a shrubbery creation form";
    try
    {
	ShrubberyCreationForm shrubbery;
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    ShrubberyCreationForm shrubbery;
    std::cout << " :" << std::endl << shrubbery << std::endl;
    
    std::cout << std::endl << "- Creation of a regular bureaucrat with grade 120 :";
    Bureaucrat b("[regular minion]", 120);
    std::cout << std::endl << b << std::endl;

    std::cout << std::endl << "- Attempt from [regular minion] to execute the shrubbery creation form :" << std::endl; 
    try
    {
	b.executeForm(shrubbery);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
   
    std::cout << std::endl <<  "- Attempt from [regular minion] to sign the shrubbery creation form :" << std::endl;
    try
    {
	b.signForm(shrubbery);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "- New attempt from [regular minion] to execute the shrubbery creation form :" << std::endl;
    try
    {
	b.executeForm(shrubbery);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
    
    std::cout << std::endl << "- Creation of a high ranked bureaucrat with grade 3 :";
    Bureaucrat c("[high ranked minion]", 3);
    std::cout << std::endl << c << std::endl;
    std::cout << std::endl << "- Creation of a robotomy request form";
    RobotomyRequestForm robotomy("[regular minion]", "[robotomy request form]");
    std::cout << " :" << std::endl << robotomy << std::endl;
    c.signForm(robotomy);
    if (!c.executeForm(robotomy))
    {
	std::cout << std::endl << "- Creation of a presidential pardon form";
	std::cout << " :" << std::endl << robotomy << std::endl;
	PresidentialPardonForm presidentialpardon("[high ranked minion]", "[presidential pardon form]");
	c.signForm(presidentialpardon);
	c.executeForm(presidentialpardon);
    }
    return (0);
}
