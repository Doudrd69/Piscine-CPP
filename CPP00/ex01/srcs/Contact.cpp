#include <iostream>
#include "../includes/Contact.hpp"

Contact::Contact() {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact() {
	std::cout << "Destructor called" << std::endl;
	return ;
}