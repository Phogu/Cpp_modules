#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "Cat";

	std::cout << "WrongCat: Default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	*this = other;

	std::cout << "WrongCat: Copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	this->type = other.type;

	std::cout << "WrongCat: Assignment operator" << std::endl;

	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow! Meow! Meow!" << std::endl;
}