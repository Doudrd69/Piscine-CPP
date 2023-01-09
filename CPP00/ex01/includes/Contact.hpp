# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

using namespace std;

class Contact {

	public :

		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	secret;

		Contact();
		~Contact();
};

#endif