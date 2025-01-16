#include "Base.hpp"
#include <cstdlib>

Base::~Base() {}

Base * Base::generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	switch (random)
	{
		case 2:
			std::cout << BLUE << "Instantiated Class: A" << RESET << "\n";
			return new A();
		case 1:
			std::cout << BLUE << "Instantiated Class: B" << RESET << "\n";
			return new B();
		case 0:
			std::cout << BLUE << "Instantiated Class: C" << RESET << "\n";
			return new C();
	}
		std::cout << RED << "ERROR: Couldnt be instantiated any Class!" << RESET << std::endl;
		return NULL;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << BLUE << "The actual type of the object is (*): A" << RESET << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << BLUE << "The actual type of the object is (*): B" << RESET << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << BLUE << "The actual type of the object is (*): C" << RESET << std::endl;
	else
		std::cout << RED << "ERROR: Types dont match!" << RESET << std::endl;
}

void Base::identify(Base& p)
{
	try
	{
		Base a = dynamic_cast<A &>(p);
		std::cout << BLUE << "The actual type of the object is (&): A" << RESET << std::endl;
		(void)a;
	}
	catch (std::exception &e) {}

	try
	{
		Base b = dynamic_cast<B &>(p);
		std::cout << BLUE << "The actual type of the object is (&): B" << RESET << std::endl;
		(void)b;
	}
	catch (std::exception &e) {}

	try
	{
		Base c = dynamic_cast<C &>(p);
		std::cout << BLUE << "The actual type of the object is (&): C" << RESET << std::endl;
		(void)c;
	}
	catch (std::exception &e) {}
}