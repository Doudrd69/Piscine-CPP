#include <iostream>
#include "../includes/Contact.hpp"

Contact::Contact() {
	//std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact() {
	//std::cout << "Destructor called" << std::endl;
	return ;
}

int	Contact::getIndex(void)
{
	return (this->index);
}

void	Contact::setIndex(int i)
{
	this->index = i;
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->first_name);
}

void Contact::setFirstName(std::string value)
{
	this->first_name = value;
	return ;
}

std::string Contact::getLastName(void)
{
	return (this->last_name);
}

void Contact::setLastName(std::string value)
{
	this->last_name = value;
	return ;
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

void Contact::setNickname(std::string value)
{
	this->nickname = value;
	return ;
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phone_number);
}

void Contact::setPhoneNumber(std::string value)
{
	this->phone_number = value;
	return ;
}

std::string Contact::getSecret(void)
{
	return (this->secret);
}

void Contact::setSecret(std::string value)
{
	this->secret = value;
	return ;
}