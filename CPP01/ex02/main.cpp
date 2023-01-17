#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str       ==> " << &str << std::endl;
	std::cout << "Address of strintPTR ==> " << stringPTR << std::endl;
	std::cout << "Address of stringREF ==> " << &stringREF << std::endl;

	std::cout << "\nValue of str       ==> " << str << std::endl;
	std::cout << "Value of strintPTR ==> " << *stringPTR << std::endl;
	std::cout << "Value of stringREF ==> " << stringREF << std::endl;

	return 0;
}