#include "Brain.hpp"
#include <sstream>

// Constructors
Brain::Brain() {
    std::string idea = "I want to ";
    for (size_t i = 0; i < 100; i++) {
        std::ostringstream ss;
        ss << idea << i;
        ideas[i] = ss.str();
    }
    std::cout << "Default Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = copy.ideas[i];
	}
	std::cout << "Copy Constructor called of Brain" << std::endl;
}

// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}

// Operators
Brain &Brain::operator=(const Brain &assign)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = assign.ideas[i];
	}
	std::cout << "Assign Operator called of Brain " << std::endl;
	return *this;
}

std::string const Brain::getIdea(size_t index) const
{
	return ideas[index];
}