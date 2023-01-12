#include <iostream>
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
	std::cout << "== Please register contact informations ==" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, contact.first_name);
	if (check_line_is_empty_to_return(contact.first_name) == 1)
		return 1;
	std::cout << "Last name : ";
	std::getline(std::cin, contact.last_name);
	if (check_line_is_empty_to_return(contact.last_name) == 1)
		return 1;
	std::cout << "Nick name : ";
	std::getline(std::cin, contact.nickname);
	if (check_line_is_empty_to_return(contact.nickname) == 1)
		return 1;
	std::cout << "Phone number : ";
	std::getline(std::cin, contact.phone_number);
	if (check_line_is_empty_to_return(contact.phone_number) == 1)
		return 1;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, contact.secret);
	if (check_line_is_empty_to_return(contact.secret) == 1)
		return 1;
	contact.index = i;
	return 0;
}

void	PhoneBook::search_contact(Contact contact[8], int size)
{
	int	i;

	if (size > 0)
	{
		std::cout << "\n==>              Contact list             <==" << std::endl;
		std::cout << "=  INDEX   =  F_NAME  =  L_NAME   =  N_NAME  =" << std::endl;
		for (int i = 0; i < size; i++)
		{
			std::cout << '|' << "         " << contact[i].index << "|";
			print_first_name(contact[i].first_name);
			print_last_name(contact[i].last_name);
			print_nickname(contact[i].nickname);
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
		int length = str.length();
		if (length > 10)
		{
			std::string	tmp = str;
			tmp.resize(9);
			while (length++ < 10)
				std::cout << ' ';
			std::cout << tmp << '.' << '|';
		}
		else
		{
			while (length++ < 10)
				std::cout << ' ';
			std::cout << str << '|';
		}
}

void	PhoneBook::print_last_name(std::string str)
{
	int length = str.length();
	if (length > 10)
	{
		std::string	tmp = str;
		tmp.resize(9);
		while (length++ < 10)
			std::cout << ' ';
		std::cout << tmp << '.' << '|';
	}
	else
	{
		while (length++ < 10)
			std::cout << ' ';
		std::cout << str << '|';
	}
}

void	PhoneBook::print_nickname(std::string str)
{
	int length = str.length();
	if (length > 10)
	{
		std::string	tmp = str;
		tmp.resize(9);
		while (length++ < 10)
			std::cout << ' ';
		std::cout << tmp << '.' << '|' << std::endl;
	}
	else
	{
		while (length++ < 10)
			std::cout << ' ';
		std::cout << str << '|' << std::endl;
	}
}

void	PhoneBook::print_contact(Contact& contact)
{
	std::cout << "\nFirst name     : " << contact.first_name << std::endl;
	std::cout << "Last name      : " << contact.last_name << std::endl;
	std::cout << "Nickname       : " << contact.nickname << std::endl;
	std::cout << "Phone numer    : " << contact.phone_number << std::endl;
	std::cout << "Darkest secret : " << contact.secret << std::endl;
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
