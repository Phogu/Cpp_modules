#pragma once
#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	// Constructors
	Animal();
	Animal(const Animal &copy);
	Animal(std::string type);

	// Destructor
	virtual ~Animal();

	// Operators
	Animal &operator=(const Animal &assign);

	// Getters / Setters
	std::string getType() const;
	virtual void makeSound() const;
};