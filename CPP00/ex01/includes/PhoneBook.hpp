# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public :

		int			size;
		Contact		contact[8];

		PhoneBook();
		~PhoneBook();

		int		add_contact(Contact& contact, int i);
		void	search_contact(Contact contact[7], int size);

	private :

		void	print_contact(Contact& contact);
		void	print_nickname(std::string str);
		void	print_last_name(std::string str);
		void	print_first_name(std::string str);
		int		check_line_is_empty_to_return(std::string str);
};

#endif