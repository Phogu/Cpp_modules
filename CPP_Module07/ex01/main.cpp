#include "iter.hpp"

void count(std::string const &str)
{
	std::cout << BLUE << str << RESET << std::endl;
}

void discount(int const &number)
{
	int discount = 0;

	discount = number * (100-30) / 100;
	std::cout << YELLOW << discount << RESET << std::endl;
}

int main()
{
	std::string days[] = {"friday", "saturday", "sunday"};
	iter(days, 3, count);

	int numbers[] = {100, 2000, 30, 450};
	iter(numbers, 4, discount);
}