#pragma once
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(const Dog &copy);
	Dog(std::string type);

	// Destructor
	~Dog();

	// Operators
	Dog &operator=(const Dog &assign);

	void makeSound() const;
	const Brain &getBrain() const;

private:
	Brain *_dogBrain;
};