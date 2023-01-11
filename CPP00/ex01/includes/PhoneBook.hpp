# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public :

		int			size;
		Contact		contact[8];

		PhoneBook();
		~PhoneBook();

		void	add_contact(Contact& contact, int i);
		void	search_contact(Contact contact[7], int size);
};

#endif