#include <iostream>
#include <string>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

using namespace std;

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int		index = 0;
	string	str;

	PhoneBook	repertory;
	Contact		contact[7];

	while (1)
	{
		std::cout << "Enter command : ";
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			if (index < 8)
			{
				repertory.add_contact(contact[index]);
				index++;
			}
			else
				std::cout << "limit size reached" << std::endl;
		}
		else if (str.compare("SEARCH") == 0)
			repertory.search_contact();
		else if (str.compare("HELP") == 0)
			std::cout << "List of valid command : ADD / SEARCH / EXIT" << std::endl;
		else if (str.compare("EXIT") == 0)
		{
			for (int i = 0; i < 7; i++)
				std::cout << contact[i].first_name << std::endl;
			break ;
		}
		else
			std::cout << "Error : invalid command : to see valid command use HELP" << std::endl;
	}
	return 0;
}