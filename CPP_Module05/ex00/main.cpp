#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat mike("Mike", 0);
			std::cout << mike << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat jim("Jim", 151);
			std::cout << jim << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	
	{	
		try 
		{
			Bureaucrat dur("Dur", 3);
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";

	{	
		try 
		{
			Bureaucrat alan("Alan", 149);
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	{
		try 
		{
			Bureaucrat alan("Alan", 50);
			std::cout << alan << std::endl;
			Bureaucrat Bob("Bob", 55);
			std::cout << Bob<< std::endl;
			
			alan = Bob;
			std::cout << YELLOW << "Alan = Bob" << RESET << std::endl;
			std::cout << alan << std::endl;
			std::cout << Bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << YELLOW << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
