#pragma once
#include "iostream"

class Fixed {
	private:
		int	fixed_point;
		static const int fixed_bits = 8;
	public:
		Fixed();
		Fixed(const int fi);
		Fixed(const float ff);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed	&operator=(Fixed const& fixed);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	operator+(Fixed const& fixed);
		Fixed	operator-(Fixed const& fixed);
		Fixed	operator*(Fixed const& fixed);
		Fixed	operator/(Fixed const& fixed);
		bool	operator>(Fixed const& fixed)const;
		bool	operator>=(Fixed const& fixed)const;
		bool	operator<(Fixed const& fixed)const;
		bool	operator<=(Fixed const& fixed)const;
		bool 	operator!=(Fixed const& fixed)const;
		bool	operator==(Fixed const& fixed)const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed& a, const Fixed& b);
		const static Fixed	&min(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);