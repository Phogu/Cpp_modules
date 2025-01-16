#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << BLUE << "a = " << a << "," << RESET << YELLOW << " b = " << b << RESET << std::endl;
	std::cout << BLUE << "min( a, b ) = " << RESET << YELLOW << ::min( a, b ) << RESET << std::endl;
	std::cout << BLUE << "max( a, b ) = " << RESET << YELLOW << ::max( a, b ) << RESET << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << BLUE << "c = " << c << "," << RESET << YELLOW << " d = " << d << RESET << std::endl;
	std::cout << BLUE << "min( c, d ) = " << RESET << YELLOW << ::min( c, d ) << RESET << std::endl;
	std::cout << BLUE << "max( c, d ) = " << RESET <<  YELLOW << ::max( c, d ) << RESET << std::endl;

	return 0;
}