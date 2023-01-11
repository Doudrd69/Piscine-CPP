# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

using namespace std;

class Contact {

	public :

		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;

		Contact();
		~Contact();
};

#endif