#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}
Fixed::~Fixed()
{
    std::cout <<"Destructor called\n";
}
int Fixed::getRawBits(void) const
{
    std::cout <<"getRawBits member function called\n";
    return this->fixed_point;
}
void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed &Fixed::operator=(const Fixed& fixed_new)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &fixed_new)
    {
        this->fixed_point = fixed_new.getRawBits();
    }
    return *this;
}