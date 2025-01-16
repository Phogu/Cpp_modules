#pragma once
#include <iostream>
#include <string>

class Brain
{
protected:
	std::string ideas[100];
public:
	// Constructors
	Brain();
	Brain(const Brain &copy);

	// Destructor
	~Brain();

	// Operators
	Brain &operator=(const Brain &assign);

	std::string const getIdea(size_t index) const;

};