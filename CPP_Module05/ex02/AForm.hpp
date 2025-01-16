#pragma once

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Bureaucrat;
class AForm{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
	public:
		AForm(void);
		AForm(std::string const &name, int const &signGrade, int const &execGrade);
		AForm(AForm const &copy);
		virtual ~AForm(void);
		AForm const	&operator=(AForm const &copy);
		void				putIsSigned(bool isSigned);
		std::string const &	getName(void) const;
		bool const &		getIsSigned(void) const;
		int const &			getSignGrade(void) const;
		int const &			getExecGrade(void) const;
		void				beSigned(Bureaucrat &bureaucrat);
		void				execute(Bureaucrat const &executor) const;
		virtual void		beExecuted(Bureaucrat const &executor) const = 0;

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
		class NotSignedException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw(){
					return ("form is not signed.");
				}
		};
};

std::ostream	&operator<<(std::ostream &str, AForm const &form);
