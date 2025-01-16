#pragma once

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Form;
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		Bureaucrat const &	operator=(Bureaucrat const & rhs);
		void				putGrade(int grade);
		std::string const &	getName(void) const;
		int	const &			getGrade(void) const;
		void 				incGrade(void);
		void 				decGrade(void);
		void				signForm(Form &form);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw(){
					return ("Bureaucrat's grade is too high.");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw(){
					return ("Bureaucrat's grade is too low.");
				}
		};
};

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);