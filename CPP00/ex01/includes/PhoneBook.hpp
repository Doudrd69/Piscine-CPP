# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public :

		PhoneBook();
		~PhoneBook();

		int			getSize(void);
		void		setSize(void);
		Contact*	getContact(void);
		Contact&	getOneContact(int i);

		int			add_contact(Contact& contact, int i);
		void		search_contact(Contact contact[8], int size);

	private :

		int			size;
		Contact		contact[8];

		void		print_contact(Contact& contact);
		void		print_nickname(std::string str);
		void		print_last_name(std::string str);
		void		print_first_name(std::string str);
		int			check_line_is_empty_to_return(std::string str);
};

#endif