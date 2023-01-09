#include <iostream>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Constructor called" << std::endl;
	this->size = 8;
	return ;
}

PhoneBook::~PhoneBook() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add_contact(Contact& contact)
{
	std::cout << "== Please register contact informations ==" << std::endl;
	std::cout << "First name : ";
	std::cin >> contact.first_name;
	std::cout << "Last name : ";
	std::cin >> contact.last_name;
	std::cout << "Nick name : ";
	std::cin >> contact.nickname;
	std::cout << "Phone number : ";
	std::cin >> contact.phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> contact.secret;
	return ;
}

void	PhoneBook::search_contact(void)
{
	std::cout << "search contact" << std::endl;
	return ;
}