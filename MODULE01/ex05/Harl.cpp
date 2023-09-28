#include "Harl.h"

Harl::Harl()
{
    harlkit[0] = &Harl::debug;
    harlkit[1] = &Harl::info;
    harlkit[2] = &Harl::warning;
    harlkit[3] = &Harl::error;
    lvls[0] = "debug";
    lvls[1] = "info";
    lvls[2] = "warning";
    lvls[3] = "error";
}

Harl::~Harl()
{
}

void	Harl::debug() const
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info() const
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() const
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() const
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; 
}

void	Harl::complain(std::string level) const
{
   for (int i = 0; i < 4; i++)
	if (level == lvls[i])
	    (this->*(harlkit[i]))();
}
