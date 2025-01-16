#pragma once
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class Intern
{	
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern &	operator=(Intern const &rhs);

		AForm *	makeForm(std::string const &nameForm, std::string const &target);
};