#pragma once

#include "AForm.hpp"

class Bureaucrat;
class PresidentialPardonForm: public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & copy);

		void				putTarget(std::string const & target);
		std::string const &	getTarget(void) const;

		void				beExecuted(Bureaucrat const &executor) const;
};

std::ostream & operator<<(std::ostream & str, PresidentialPardonForm const & form);