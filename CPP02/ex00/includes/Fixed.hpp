#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public :

		Fixed();
		Fixed(const Fixed& other);				//constructeur de recopie
		void operator=(const Fixed& other);	//surcharge de l operateur d affectation
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :

		int					_fixedValue;	//valeur en virgule fixe
		static const int	_bits = 8;			//nombre de bits de la partie fractionnaire
};

#endif