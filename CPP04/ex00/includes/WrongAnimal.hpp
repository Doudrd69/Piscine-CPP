#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public :

		WrongAnimal();
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal& operator=(const WrongAnimal& obj);
		~WrongAnimal();

		void	makeSound(void) const;

		void	setType(std::string value);
		const std::string&	getType(void) const;

		private :

			std::string	_type;
};

#endif