#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->type = "Dog";

	std::cout << "Dog: Default constructor" << std::endl;
}

Dog::Dog(const Dog& other) {
	*this = other;

	std::cout << "Dog: Copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	this->type = other.type;

	std::cout << "Dog: Assignment operator" << std::endl;

	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof! Woof!" << std::endl;
}