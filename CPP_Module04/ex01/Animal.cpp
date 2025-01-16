#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "Anonymous";
	std::cout << "Animal: Default constructor " << _type << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "Animal: Copy constructor " << _type << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal: String constructor " << _type << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal: Destructor " << _type << std::endl;
}

// Operators
Animal &Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	std::cout << "Animal: Assignment operator " << _type << std::endl;
	return *this;
}

// Getters / Setters
std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "\"Animal generic sound\"" << std::endl;
}