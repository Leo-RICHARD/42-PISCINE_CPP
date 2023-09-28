#include "Bureaucrat.h"

int	main()
{
    std::cout << "- Creation of a default \"test\" bureaucrat";
    try
    {
	Bureaucrat test;
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Bureaucrat test;
    std::cout << " :" << std::endl << test << std::endl;

    std::cout << std::endl << "- Demotion of \"test\" bureaucrat";
    try
    {
	test.demote();
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" bureaucrat with grade 151";
    try
    {
	Bureaucrat test("asdf", 151);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" bureaucrat with grade 0";
    try
    {
	Bureaucrat test("asdf", 0);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Creation of \"asdf\" bureaucrat with grade 149";
    try
    {
	Bureaucrat test("asdf", 149);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Bureaucrat asdf("asdf", 149);
    std::cout << " :" << std::endl << asdf << std::endl;

    std::cout << std::endl << "- Creation of \"fdas\" bureaucrat by copying \"asdf\"";
    try
    {
	Bureaucrat fdas(asdf);
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }
    Bureaucrat fdas(asdf);
    std::cout << " :" << std::endl << fdas << std::endl;

    std::cout << std::endl << "- Assignation of \"asdf\" to \"test\" bureaucrat";
    test = asdf;
    std::cout << " :" << std::endl << test;

    std::cout << std::endl << std::endl << "- Promotion of \"asdf\" bureaucrat to grade 1";
    try
    {
	for (int i = 0; i < 148; i++)
	    asdf.promote();
	std::cout << " :" << std::endl << asdf;
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what();
    }

    std::cout << std::endl << std::endl << "- Promotion of \"asdf\" bureaucrat";
    try
    {
	asdf.promote();
    }
    catch (std::exception &e)
    {
	std::cout << " :" << std::endl << e.what() << std::endl;
    }

    return (0);
}
