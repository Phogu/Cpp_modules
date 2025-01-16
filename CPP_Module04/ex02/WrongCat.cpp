#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat: Default constructor " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	_type = copy.getType();
	std::cout << "WrongCat: Copy constructor " << _type << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << "WrongCat: String constructor  " << _type << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor " << _type << std::endl;
}

// Operators
WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	_type = assign.getType();

	std::cout << "WrongCat: Assignment operator" << _type << std::endl;

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow! Meow! Meow!" << std::endl;
}