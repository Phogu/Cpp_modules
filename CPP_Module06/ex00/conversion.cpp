#include "conversion.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert_char(const std::string& str)
{
	char c = str[0];
	std::cout << BLUE << "Char: '" << RESET << YELLOW << c << "'" << RESET << std::endl;
	std::cout << BLUE << "Int:" << RESET << YELLOW << static_cast<int>(c) << RESET << std::endl;
	std::cout << BLUE << "Float: " << RESET << YELLOW << static_cast<float>(c) << ".0f" << RESET << std::endl;
	std::cout << BLUE << "Double: " << RESET << YELLOW << static_cast<double>(c) << ".0" << RESET << std::endl;
}

void ScalarConverter::convert_int(const std::string& str)
{
	int i = atol(str.c_str());
	if (Int_Range(i))
	{
		if ((i < 32 || i >= 126))
			std::cout << YELLOW << "Char: Non displayable" << RESET << std::endl;
		else
			std::cout << BLUE << "Char: '" << RESET << YELLOW << static_cast<char>(i) << "'" << RESET << std::endl;
		std::cout << BLUE << "Int: " << RESET << YELLOW << i << RESET << std::endl;
		std::cout << BLUE << "Float: " << RESET << YELLOW << static_cast<float>(i) << ".0f" << RESET << std::endl;
		std::cout << BLUE << "Double: " << RESET << YELLOW << static_cast<double>(i) << ".0" << RESET << std::endl;
	}
}

void ScalarConverter::convert_pseudo(const std::string& str)
{
	if (str == "nanf" || str == "nan")
	{
		std::cout << YELLOW << "Char: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Int: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Float: nanf" << RESET << std::endl;
		std::cout << YELLOW << "Double: nan" << RESET << std::endl;
	}
	else if (str == "inf" || str == "inff")
	{
		std::cout << YELLOW << "Char: Impossible" << RESET << std::endl;
		std::cout <<  YELLOW << "Int: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Float: inff" << RESET << std::endl;
		std::cout << YELLOW << "Double: inf" << RESET << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << YELLOW << "Char: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Int: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Float: -inff" << RESET << std::endl;
		std::cout << YELLOW << "Double: -inf" << RESET << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << YELLOW << "Char: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Int: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Float: +inff" << RESET << std::endl;
		std::cout << YELLOW << "Double: +inf" << RESET << std::endl;
	}
}

void ScalarConverter::convert(const std::string& str)
{
	if (str == "nanf" || str == "nan" || str == "inf" || str == "inff"
			|| str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff")
		convert_pseudo(str);
	else if ((str.length() == 1) && ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z')))
		convert_char(str);
	else if ((str.length() != 1) && ((!Int_Range(atol(str.c_str()))) || ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))))
	{
		std::cout << YELLOW << "Char: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Int: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Float: Impossible" << RESET << std::endl;
		std::cout << YELLOW << "Double: Impossible" << RESET << std::endl;
	}
	else
		convert_int(str);
}
