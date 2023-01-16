#include <iostream>
#include <iomanip>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	//std::cout << "Constructor called" << std::endl;
	this->size = 0;
	return ;
}

PhoneBook::~PhoneBook() {
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int	PhoneBook::add_contact(Contact& contact, int i)
{
	std::string	tmp;

	std::cout << "== Please register contact informations ==" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, tmp);
	contact.setFirstName(tmp);
	if (check_line_is_empty_to_return(contact.getFirstName()) == 1)
		return 1;
	std::cout << "Last name : ";
	std::getline(std::cin, tmp);
	contact.setLastName(tmp);
	if (check_line_is_empty_to_return(contact.getLastName()) == 1)
		return 1;
	std::cout << "Nick name : ";
	std::getline(std::cin, tmp);
	contact.setNickname(tmp);
	if (check_line_is_empty_to_return(contact.getNickname()) == 1)
		return 1;
	std::cout << "Phone number : ";
	std::getline(std::cin, tmp);
	contact.setPhoneNumber(tmp);
	if (check_line_is_empty_to_return(contact.getPhoneNumber()) == 1)
		return 1;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, tmp);
	contact.setSecret(tmp);
	if (check_line_is_empty_to_return(contact.getSecret()) == 1)
		return 1;
	contact.setIndex(i); //setIndex
	return 0;
}

void	PhoneBook::search_contact(Contact contact[8], int size)
{
	int	i;

	if (size > 0)
	{
		std::cout << "\n==>              Contact list             <==" << std::endl;
		std::cout << "|  INDEX   |  F_NAME  |  L_NAME  |  N_NAME  |" << std::endl;
		for (int i = 0; i < size; i++)
		{
			std::cout << '|' << "         " << contact[i].getIndex() << "|";
			print_first_name(contact[i].getFirstName());
			print_last_name(contact[i].getLastName());
			print_nickname(contact[i].getNickname());
			std::cout << std::endl;
		}
		std::cout << "\nPlease enter contact index to see his informations : ";
		std::cin >> i;
		if(!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index : index is an INT" << std::endl;
			return ;
		}
		std::cin.ignore();
		if (i >= 0 && i < size)
			print_contact(contact[i]);
		else
			std::cout << "Invalid index, please try again" << std::endl;
		return ;
	}
	std::cout << "/!\\ Repertory is empty /!\\" << std::endl;
}

void	PhoneBook::print_first_name(std::string str)
{
	std::ios init(NULL);
	init.copyfmt(std::cout);
	std::cout << std::setw(10);
	int length = str.length();
	if (length > 8)
	{
		std::cout << std::setfill('.') << std::left;
		std::cout << str.substr(0, 9) << "|";
		std::cout.copyfmt(init);
	}
	else
	{
		std::cout << str << '|';
		std::cout.copyfmt(init);
	}
}

void	PhoneBook::print_last_name(std::string str)
{
	std::ios init(NULL);
	init.copyfmt(std::cout);
	std::cout << std::setw(10);
	int length = str.length();
	if (length > 8)
	{
		std::cout << std::setfill('.') << std::left;
		std::cout << str.substr(0, 9) << "|";
		std::cout.copyfmt(init);
	}
	else
	{
		std::cout << str << '|';
		std::cout.copyfmt(init);
	}
}

void	PhoneBook::print_nickname(std::string str)
{
	std::ios init(NULL);
	init.copyfmt(std::cout);
	std::cout << std::setw(10);
	int length = str.length();
	if (length > 8)
	{
		std::cout << std::setfill('.') << std::left;
		std::cout << str.substr(0, 9) << "|";
		std::cout.copyfmt(init);
	}
	else
	{
		std::cout << str << '|';
		std::cout.copyfmt(init);
	}
}

void	PhoneBook::print_contact(Contact& contact)
{
	std::cout << "\nFirst name     : " << contact.getFirstName() << std::endl;
	std::cout << "Last name      : " << contact.getLastName() << std::endl;
	std::cout << "Nickname       : " << contact.getNickname() << std::endl;
	std::cout << "Phone numer    : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.getSecret() << std::endl;
	return ;
}

int	PhoneBook::check_line_is_empty_to_return(std::string str)
{
	if (str.empty())
	{
		std::cout << "Error : contact information can't be empty" << std::endl;
		return (1);
	}
	return (0);
}

int	PhoneBook::getSize(void)
{
	return (this->size);
}

void	PhoneBook::setSize(void)
{
	this->size += 1;
	return ;
}

Contact& PhoneBook::getOneContact(int i)
{
	return (this->contact[i]);
}

Contact* PhoneBook::getContact(void)
{
	return (this->contact);
}