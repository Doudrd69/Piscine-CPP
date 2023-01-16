#include <iostream>
#include <string>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

int	main(void)
{
	int			check = 0, i = 0;
	std::string	str;
	PhoneBook	repertory;

	std::cout << "Enter command : ";
	while (std::getline(std::cin, str))
	{
		if (str.compare("ADD") == 0)
		{
			if (repertory.getSize() == 8 && check == 0)
			{
				i = 0;
				check = 1;
			}
			if (repertory.add_contact(repertory.getOneContact(i), i) == 0)
			{
				if (repertory.getSize() < 8)
					repertory.setSize();
				i++;
			}
		}
		else if (str.compare("SEARCH") == 0)
			repertory.search_contact(repertory.getContact(), repertory.getSize());
		else if (str.compare("HELP") == 0)
			std::cout << "List of valid command : ADD / SEARCH / EXIT" << std::endl;
		else if (str.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Error : invalid command : to see valid command use HELP" << std::endl;
		std::cout << "Enter command : ";
	}
	return 0;
}
