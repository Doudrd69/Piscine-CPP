#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

	public :

		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed& other);
		~Fixed();

		//std::ostream& operator<<(std::ostream& out, const Fixed& obj);

		void				operator=(const Fixed& other);
		bool				operator>(const Fixed& obj) const;
		bool				operator<(const Fixed& obj) const;
		bool				operator>=(const Fixed& obj) const;
		bool				operator<=(const Fixed& obj) const;
		bool				operator==(const Fixed& obj) const;
		bool				operator!=(const Fixed& obj) const;

		float				operator+(const Fixed& obj) const;
		float				operator-(const Fixed& obj) const;
		float				operator*(const Fixed& obj) const;
		float				operator/(const Fixed& obj) const;

		Fixed&				operator++();
		Fixed				operator++(int);
		Fixed&				operator--();
		Fixed				operator--(int);

		static float		min(Fixed& nb1, Fixed& nb2);
		static float		min(const Fixed& nb1, const Fixed& nb2);
		static float		max(Fixed& nb1, Fixed& nb2);
		static float		max(const Fixed& nb1, const Fixed& nb2);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		float				toFloat( void ) const;
		int					toInt( void ) const;

	private :

		int					_fixedValue;
		static const int	_bits = 8;
};

#endif