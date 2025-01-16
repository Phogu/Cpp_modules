#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _catBrain;
public:
	// Constructors
	Cat();
	Cat(const Cat &copy);
	Cat(std::string type);

	// Destructor
	~Cat();

	// Operators
	Cat &operator=(const Cat &assign);

	void makeSound() const;
	const Brain& getBrain() const;

};