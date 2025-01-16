#pragma once
#include <string>
#include <iostream>

class Brain
{
public:
	// Constructors
	Brain();
	Brain(const Brain &copy);

	// Destructor
	~Brain();

	// Operators
	Brain &operator=(const Brain &assign);

	std::string const getIdea(size_t index) const;

protected:
	std::string ideas[100];
};