#include "Harl.h"

int	main()
{
    Harl karen;

    std::cout << "LEVEL ONE (debug) :" << std::endl;
    karen.complain("debug");
    std::cout << std::endl;
    std::cout << "LEVEL TWO (info) :" << std::endl;
    karen.complain("info");
    std::cout << std::endl;
    std::cout << "LEVEL THREE (warning) :" << std::endl;
    karen.complain("warning");
    std::cout << std::endl;
    std::cout << "ULTIMATE LEVEL (error) :" << std::endl;
    karen.complain("error");
    std::cout << std::endl;
    std::cout << "with unexisting level :" << std::endl;
    karen.complain("adsf");
    std::cout << std::endl;

    return (0);
}
