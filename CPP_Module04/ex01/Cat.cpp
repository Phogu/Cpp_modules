#include "Cat.hpp"

// Constructors
Cat::Cat()
{
	_type = "Cat";
	_catBrain = new Brain();
	std::cout << "Cat: Default constructor " << _type << std::endl;
}

Cat::Cat(const Cat &copy)
{
	_type = copy.getType();
	_catBrain = new Brain(copy.getBrain());
	std::cout << "Cat: Copy constructor " << _type << std::endl;
}

Cat::Cat(std::string type)
{
	_type = type;
	_catBrain = new Brain();
	std::cout << "Cat: String constructor " << _type << std::endl;
}

// Destructor
Cat::~Cat()
{
	delete _catBrain;
	std::cout << "Cat: Destructor " << _type << std::endl;
}

// Operators
Cat &Cat::operator=(const Cat &assign)
{
	_type = assign.getType();
	_catBrain = new Brain(assign.getBrain());
	std::cout << "Cat: Assignment operator " << _type << std::endl;
	return *this;
}

void Cat::makeSound() const
{

	std::cout << "Meow! Meow! Meow!" << std::endl;
}

const Brain &Cat::getBrain() const
{
	return *_catBrain;
}