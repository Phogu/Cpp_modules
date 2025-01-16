#include "conversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConverter::convert(av[1]);
		return 0;
	}
	std::cout << RED << "ERROR: Please Enter Only 1 Argument!" << RESET << std::endl;
	return 1;
}