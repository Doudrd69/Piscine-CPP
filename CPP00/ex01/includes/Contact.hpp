# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	public :

		Contact();
		~Contact();

		int				getIndex(void);
		void			setIndex(int i);
		std::string		getFirstName(void);
		void			setFirstName(std::string);
		std::string		getLastName(void);
		void			setLastName(std::string);
		std::string		getNickname(void);
		void			setNickname(std::string);
		std::string		getPhoneNumber(void);
		void			setPhoneNumber(std::string);
		std::string		getSecret(void);
		void			setSecret(std::string);

	private :

		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		secret;

};

#endif