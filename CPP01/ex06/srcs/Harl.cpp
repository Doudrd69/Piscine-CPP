#include <iostream>
#include "../includes/Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	Harl		test;
	int			index = -1;
	std::string	strArray[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*ptrArray[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == strArray[i])
			index = i;
	}

	switch(index)
	{
		case DEBUG:
			(test.*ptrArray[DEBUG])();
		case INFO:
			(test.*ptrArray[INFO])();
		case WARNING:
			(test.*ptrArray[WARNING])();
		case ERROR:
			(test.*ptrArray[ERROR])();
		break ;
	}
	if (index == -1)
		std::cout << "Error : invalid command" << std::endl;
	return ;
}