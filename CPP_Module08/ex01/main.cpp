#include "Span.hpp"
#include <cstdlib>

int main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << BLUE <<  "Shortest span: " << RESET << YELLOW << sp.shortestSpan() << RESET << std::endl;
		std::cout << BLUE << "Longest span: " << RESET << YELLOW << sp.longestSpan() << RESET << std::endl;
	}

	std::cout << std::endl;

	{
		std::vector<int> a(10000);

		for (int i = 0; i < 10000; ++i)
			a[i] = i;

		try
		{
			
			Span s(10000);
			s.add(a.begin(), a.end());
			std::cout << BLUE << "Shortest span: " << RESET << YELLOW << s.shortestSpan() << RESET << std::endl;
			std::cout << BLUE << "Longest span : " << RESET << YELLOW << s.longestSpan() << RESET << std::endl;
		}
		
		catch (std::exception& e)
		{
			std::cerr << BLUE <<"EXCEPTION: " << RESET << YELLOW << e.what() << RESET << std::endl;
		}

		return 0;
	}
}
