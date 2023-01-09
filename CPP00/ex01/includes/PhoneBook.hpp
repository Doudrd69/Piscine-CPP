# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public :

		int		size;

		PhoneBook();
		~PhoneBook();

		void	add_contact(Contact& contact);
		void	search_contact(void);
};

#endif