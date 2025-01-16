#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form form2("A50", 50, 100);
			std::cout << form2 << std::endl;
			Bureaucrat jon("Jon", 0);
			std::cout << jon << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << YELLOW << e.what() << RESET << std::endl;
		}
		
		try
		{
			Form form2("A50", 50, 100);
			std::cout << form2 << std::endl;
			Bureaucrat mike("Mike", 151);
			std::cout << mike << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << BLUE << e.what() << RESET << '\n';
		}	
	}
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Form form0("A0", 5, 0);
			std::cout << form0 << std::endl;
			Bureaucrat meena("Meena", 49);
			std::cout << meena << std::endl;
			meena.signForm(form0);
		}
		catch(std::exception &e)
		{
			std::cerr << YELLOW << e.what() << RESET << std::endl;
		}

		try
		{
			Form form1("A151", 5, 151);
			std::cout << form1 << std::endl;
			Bureaucrat meena("Meena", 49);
			std::cout << meena << std::endl;
			meena.signForm(form1);
		}
		catch(std::exception &e)
		{
			std::cerr << YELLOW << e.what() << RESET << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Form form2("A50", 50, 100);
			std::cout << form2 << std::endl;
			Bureaucrat meena("Meena", 49);
			std::cout << meena << std::endl;
			meena.signForm(form2);
		}
		catch(const std::exception& e)
		{
			std::cerr << YELLOW << e.what() << RESET << '\n';
		}
	}
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Form form2("C_303", 20, 45);
			Bureaucrat jon("Jon", 35);
			std::cout << form2 << std::endl;
			std::cout << jon << std::endl;
			jon.signForm(form2);
		}
		catch (std::exception &e)
		{
			std::cout << YELLOW << e.what() << RESET << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	return (0);
}
