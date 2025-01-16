#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm shrubbery("Home");
	RobotomyRequestForm robotomy("Morty");
	PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat mike("Mike", 150);
	Bureaucrat jon("Jon", 46);
	Bureaucrat steve("Steve", 3);
	
	{
		try
		{
			std::cout << steve << std::endl;
			
			steve.executeForm(shrubbery);
			std::cout << shrubbery << std::endl;
			
			steve.executeForm(robotomy);
			std::cout << robotomy << std::endl;
			
			pardon.beSigned(steve);
			steve.executeForm(pardon);
			std::cout << pardon << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	
	/* Sign form and try to execute without enough grade */
	{
		try
		{
			ShrubberyCreationForm jonShrubbery = shrubbery;
			RobotomyRequestForm jonRobot = robotomy;
			jonShrubbery.putTarget("Jon");
			jonRobot.putTarget("Duke");
			std::cout << jon <<std::endl;
			
			jonShrubbery.beSigned(jon);
			jon.executeForm(jonShrubbery);
			std::cout << jonShrubbery << std::endl;
			
			jonRobot.beSigned(jon);
			jon.executeForm(jonRobot);
			std::cout << jonRobot << std::endl;			
			
			pardon.beSigned(jon);
			jon.executeForm(pardon);
			std::cout << pardon << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
		
		try
		{
			ShrubberyCreationForm mikeShrubbery = shrubbery;
			mikeShrubbery.putTarget("Mike");
			std::cout << std::endl;
			std::cout << mike << std::endl;
			
			mikeShrubbery.beSigned(mike);
			mike.executeForm(mikeShrubbery);
			std::cout << mikeShrubbery << std::endl;
			
			robotomy.beSigned(mike);
			mike.executeForm(robotomy);
			std::cout << robotomy << std::endl;			
			
			pardon.beSigned(mike);
			mike.executeForm(pardon);
			std::cout << pardon << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	
	/* Sign forms and execute them */
	{
		try
		{
			ShrubberyCreationForm steveShrubbery = shrubbery;
			RobotomyRequestForm steveRobot = robotomy;
			steveShrubbery.putTarget("Steve");
			steveRobot.putTarget("Bob");
			std::cout << steve <<std::endl;
			
			steveShrubbery.beSigned(steve);
			steve.executeForm(steveShrubbery);
			std::cout << steveShrubbery << std::endl;
			
			robotomy.beSigned(steve);
			steve.executeForm(robotomy);
			std::cout << robotomy << std::endl;
			
			pardon.beSigned(steve);
			steve.executeForm(pardon);
			std::cout << pardon << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n --------------------- \n\n";
	return (0);
}
