#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cat;
	Dog dog;
	//Animal anim; //not allowed
	//Animal *anim = new Animal(); //not allowed

	std::cout << std::endl;
	std::cout << cat.getBrain().getIdea(0) << std::endl;
	std::cout << dog.getBrain().getIdea(1) << std::endl;

	std::cout << std::endl;

	dog.makeSound();
	cat.makeSound();

	std::cout << std::endl;
}