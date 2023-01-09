#include <iostream>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

Contact	contact;

PhoneBook::PhoneBook() {
	std::cout << "Constructor called" << std::endl;
	this->size = 8;
	return ;
}

PhoneBook::~PhoneBook() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add_contact(void)
{
	std::cout << "== Please register contact informations ==" << std::endl;
	std::cout << "First name : ";
	std::cin >> contact.first_name;
	return ;
}

void	PhoneBook::search_contact(void)
{
	std::cout << "search contact" << std::endl;
	return ;
}