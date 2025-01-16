#pragma once
#include "WrongAnimal.hpp"
#include "iostream"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat(std::string type);

	// Destructor
	~WrongCat();

	// Operators
	WrongCat &operator=(const WrongCat &assign);

	void makeSound() const;

private:
};