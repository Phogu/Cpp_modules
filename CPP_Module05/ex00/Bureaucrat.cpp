# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150) {
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int const & grade): _name(name), _grade(grade){
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade()){
	return ;
}

Bureaucrat::~Bureaucrat(void){
	return ;
}

Bureaucrat const &	Bureaucrat::operator=(Bureaucrat const & rhs){
	if (this != &rhs)
	{
		this->putGrade(rhs.getGrade());
	}
	return (*this);
}

void				Bureaucrat::putGrade(int grade){
	this->_grade = grade;
	return ;	
}

std::string const &	Bureaucrat::getName(void) const{
	return (this->_name);
}

int	const &			Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

void 				Bureaucrat::incGrade(void){
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->putGrade(this->getGrade() - 1);
	return ;
}

void 				Bureaucrat::decGrade(void){
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->putGrade(this->getGrade() + 1);
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat)
{
	return (str << YELLOW << bureaucrat.getName() << ", " << RESET << BLUE << "bureaucrat grade " << RESET << YELLOW << bureaucrat.getGrade() << RESET);
}