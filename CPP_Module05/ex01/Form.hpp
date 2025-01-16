#pragma once

#include <iostream>

class Bureaucrat;
class Form{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form(void);
		Form(std::string const &name, int const &signGrade, int const &execGrade);
		Form(Form const &copy);
		~Form(void);
		Form const	&operator=(Form const &copy);
		void				putIsSigned(bool isSigned);
		std::string const &	getName(void) const;
		bool const &		getIsSigned(void) const;
		int const &			getSignGrade(void) const;
		int const &			getExecGrade(void) const;
		void				beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw(){
					return ("grade is too high.");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw(){
					return ("grade is too low.");
				}
		};
};

std::ostream	&operator<<(std::ostream &str, Form const &form);
