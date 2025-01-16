#pragma once
#include <iostream>
#define Int_Range(value) ((value >= -2147483647 - 1) && (value <= 2147483647))

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter();

		static void convert(const std::string& str);
		static void convert_char(const std::string& str);
		static void convert_int(const std::string& str);
		static void convert_pseudo(const std::string& str);
};