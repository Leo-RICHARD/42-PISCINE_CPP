#include "Bureaucrat.h"

int	main()
{
    std::cout << "- Creation of a default \"test\" form";
    try
    {
	Form test;
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Form test;
    std::cout << " :" << std::endl << test;

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" form with minimal grades required 151";
    try
    {
	Form f("asdf", 151, 151);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" form with minimal grades required 0";
    try
    {
	Form f("asdf", 0, 0);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" form with minimal grades required 1";
    try
    {
	Form f("asdf", 1, 1);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Form asdf("asdf", 1, 1);
    std::cout << " :" << std::endl << asdf << std::endl;

    std::cout << std::endl << "- Creation of \"fdas\" form by copying \"asdf\"";
    try
    {
	Form fdas(asdf);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Form fdas(asdf);
    std::cout << " :" << std::endl << fdas << std::endl;

    std::cout << std::endl << "- Assignation of \"asdf\" to \"test\" form";
    test = asdf;
    std::cout << " :" << std::endl << test << std::endl;
    Bureaucrat b;

    std::cout << std::endl << "- Attempt from default bureaucrat \"[bureaucrat]\" with grade 150 to sign the asdf form :" << std::endl;
    try
    {
	b.signForm(asdf);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "- Attempt from default bureaucrat \"[bureaucrat]\" with grade 150 to sign the default form \"[form]\" :" << std::endl;
    try
    {
	b.signForm(test);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }

    std::cout << std::endl << "- Attempt from default bureaucrat \"[bureaucrat]\" with grade 150 to sign again the default form \"[form]\" :" << std::endl;
    try
    {
	b.signForm(test);
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }

    return (0);
}
