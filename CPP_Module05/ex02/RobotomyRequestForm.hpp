#pragma once

#include "AForm.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &copy);

		void				putTarget(std::string const & target);
		std::string const &	getTarget(void) const;

		void				beExecuted(Bureaucrat const &executor) const;
};

std::ostream &				operator<<(std::ostream &str, RobotomyRequestForm const &form);