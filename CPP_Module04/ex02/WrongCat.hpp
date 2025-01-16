#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

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

};