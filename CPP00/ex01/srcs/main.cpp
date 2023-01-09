#include <iostream>
#include <string>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

using namespace std;

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	string	str;

	PhoneBook	repertory;
	Contact		contact;

	while (1)
	{
		std::cout << "Enter command : ";
		std::cin >> str;
		if (str.compare("ADD") == 0)
			repertory.add_contact();
		else if (str.compare("SEARCH") == 0)
			repertory.search_contact();
		else if (str.compare("HELP") == 0)
			std::cout << "List of valid command : ADD / SEARCH / EXIT" << std::endl;
		else if (str.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Error : invalid command : to see valid command use HELP" << std::endl;
	}
	return 0;
}