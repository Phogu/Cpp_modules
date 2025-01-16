#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default consturctor called\n";
}
Fixed::Fixed(const int fi)
{
    std::cout << "Int constructor called\n";
	this->fixed_point = (fi * (1 << this->fixed_bits));
}
Fixed::Fixed(const float ff)
{
    std::cout << "Float constructor called\n";
	this->fixed_point = roundf(ff * (1 << this->fixed_bits));
}
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n"; 
        *this = copy;
}
int	Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw) 
{
	this->fixed_point = raw;	
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
Fixed &Fixed::operator=(const Fixed &fixed_new)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &fixed_new)
    {
        this->fixed_point = fixed_new.fixed_point;
    }
    return(*this);
}
float Fixed::toFloat(void) const
{
    return ((float)this->fixed_point / (float)(1 << this->fixed_bits));
}
int Fixed::toInt(void) const
{
    return (this->fixed_point / (1 << this->fixed_bits));
}
std::ostream &operator<<(std::ostream &o, const Fixed& fixed_point) {
	o << fixed_point.toFloat();
	return (o);
}