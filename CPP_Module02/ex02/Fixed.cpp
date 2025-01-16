#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& copy) {
	*this = copy;
}

Fixed::Fixed(const int fi) {
	this->fixed_point = (fi * (1 << this->fixed_bits));
}

Fixed::Fixed(const float ff) {
	this->fixed_point = roundf(ff * (1 << this->fixed_bits));
}

Fixed::~Fixed() {
}

Fixed	&Fixed::operator=(Fixed const& fixed_point) {
	if (this != &fixed_point)
		this->fixed_point = fixed_point.fixed_point;
	return (*this);
}

bool	Fixed::operator>(Fixed const& fixed_point) const{
	return (this->fixed_point > fixed_point.getRawBits());
}

bool	Fixed::operator>=(Fixed const& fixed_point) const{
	return (this->fixed_point >= fixed_point.getRawBits());
}

bool	Fixed::operator<(Fixed const& fixed_point) const{
	return (this->fixed_point < fixed_point.getRawBits());
}

bool	Fixed::operator<=(Fixed const& fixed_point) const{
	return (this->fixed_point <= fixed_point.getRawBits());
}

bool	Fixed::operator==(Fixed const& fixed_point) const{
	return (this->fixed_point == fixed_point.getRawBits());
}

bool	Fixed::operator!=(Fixed const& fixed_point) const{
	return (this->fixed_point != fixed_point.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& fixed_point) {
	return (Fixed(this->toFloat() + fixed_point.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& fixed_point) {
	return (Fixed(this->toFloat() - fixed_point.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& fixed_point) {
	return (Fixed(this->toFloat() * fixed_point.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& fixed_point) {
	return (Fixed(this->toFloat() / fixed_point.toFloat()));
}

Fixed	&Fixed::operator++() {
	this->fixed_point++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	ret(this->toFloat());
	this->fixed_point++;
	return (ret);
}

Fixed	&Fixed::operator--() {
	this->fixed_point--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	ret(this->toFloat());
	this->fixed_point--;
	return (ret);
}

int	Fixed::getRawBits() const {
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;	
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_point / (float)(1 << this->fixed_bits));
}

int	Fixed::toInt(void) const {
	return (this->fixed_point / (1 << this->fixed_bits));
}

Fixed	&Fixed::max(Fixed& a, Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed& a, Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed&a, const Fixed& b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}


std::ostream &operator<<(std::ostream &o, const Fixed& fixed) {
	o << fixed.toFloat();
	return (o);
}