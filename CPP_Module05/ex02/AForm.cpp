#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Constructors & Destructors */
AForm::AForm(void): _name("Default"), _isSigned(false), _signGrade(50), _execGrade(100) {
	return ;
}
AForm::AForm(std::string const &name, int const &signGrade, int const &execGrade):_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (getSignGrade() < 1 || getExecGrade() < 1)
	{	std::cout << "Form's ";
		throw AForm::GradeTooHighException();}
	else if (getSignGrade() > 150 || getExecGrade() > 150)
	{	std::cout << "Form's ";
		throw AForm::GradeTooLowException();}
	return ;
}
AForm::AForm(AForm const &copy): _name(copy.getName()), _isSigned(copy.getIsSigned()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade()) {
	return ;
}
AForm::~AForm(void){
	return ;
}

/* Basic Operators */
AForm const 	&AForm::operator=(AForm const &copy){
	if (this != &copy)
	{
		this->putIsSigned(copy.getIsSigned());
	}
	return (*this);
}

void				AForm::putIsSigned(bool isSigned){
	this->_isSigned = isSigned;
	return ;
}
std::string const &	AForm::getName(void) const{
	return (this->_name);
}
bool const &		AForm::getIsSigned(void) const{
	return (this->_isSigned);
}
int const &			AForm::getSignGrade(void) const{
	return (this->_signGrade);
}
int const &			AForm::getExecGrade(void) const{
	return (this->_execGrade);
}

void				AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > getSignGrade())
		throw(AForm::GradeTooLowException());
	else
		putIsSigned(true);
	return ;
}
void			AForm::execute(Bureaucrat const &executor) const{
	if (!getIsSigned())
		throw(AForm::NotSignedException());
	else if (executor.getGrade() > getExecGrade())
		throw(AForm::GradeTooLowException());
	else
		beExecuted(executor);
	return ;

}

std::ostream	&operator<<(std::ostream &str, AForm const &form){
	str << BLUE << "Form " << RESET << YELLOW << form.getName() << RESET << BLUE <<" could signed" << RESET;
	str << BLUE << " with require grade " << RESET << YELLOW << form.getSignGrade() << RESET << BLUE << " to sign and grade " << RESET<< YELLOW << form.getExecGrade() << RESET << BLUE << " to execute" << RESET;
	return (str);
}