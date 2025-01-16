#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << YELLOW << mstack.top() << RESET << std::endl;

	std::cout << BLUE << "------------" << RESET << std::endl;

	mstack.pop();
	std::cout << YELLOW << mstack.size() << RESET << std::endl;

	std::cout << BLUE << "------------" << RESET << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator b = mstack.begin();
	MutantStack<int>::iterator e = mstack.end();

	while (b != e)
	{
		std::cout << YELLOW << *b << RESET << std::endl;
		++b;
	}
	return 0;
}
