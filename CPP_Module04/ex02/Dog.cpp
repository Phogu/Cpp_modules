#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	_type = "Dog";
	_dogBrain = new Brain();
	std::cout << "Dog: Default constructor " << _type << std::endl;
}

Dog::Dog(const Dog &copy)
{
	_type = copy.getType();
	_dogBrain = new Brain(copy.getBrain());
	std::cout << "Dog: Copy constructor " << _type << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	_dogBrain = new Brain();
	std::cout << "Dog: String constructor " << _type << std::endl;
}

// Destructor
Dog::~Dog()
{
	delete _dogBrain;
	std::cout << "Dog: Destructor " << _type << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	_dogBrain = new Brain(assign.getBrain());
	std::cout << "Dog: Assignment operator " << _type << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof! Woof!" << std::endl;
}

const Brain &Dog::getBrain() const
{
	return *_dogBrain;
}