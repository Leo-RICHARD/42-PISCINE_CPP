#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class	Intern
{
    std::string formType[3];
    Form *(Intern::*createForm[3])(std::string const &, std::string const &);

    public :

    Intern();
    Intern(Intern const &);
    ~Intern();

    Form *makeForm(std::string const &, std::string const &);
    Form *makeShrubberyCreationForm(std::string const &, std::string const &);
    Form *makeRobotomyRequestForm(std::string const &, std::string const &);
    Form *makePresidentialPardonForm(std::string const &, std::string const &);

    Intern &operator=(Intern const &);
};
