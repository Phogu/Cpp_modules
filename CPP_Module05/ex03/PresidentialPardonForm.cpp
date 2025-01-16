#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm::AForm("PresidentialPardonForm", 25, 5), _target("default") {
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string const & target): AForm::AForm("PresidentialPardonForm", 25, 5), _target(target) {
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): AForm::AForm(src), _target(src.getTarget()) {
	return ;
}
PresidentialPardonForm::~PresidentialPardonForm(void){
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copy){
	AForm::operator=(copy);
	this->putTarget(copy.getTarget());
	return (*this);
}

void				PresidentialPardonForm::putTarget(std::string const & target){
	this->_target = target;
	return ;
}
std::string const &	PresidentialPardonForm::getTarget(void) const{
	return (this->_target);
}

void				PresidentialPardonForm::beExecuted(Bureaucrat const & executor) const {
	(void)executor;
	std::cout << YELLOW << this->getTarget() << RESET << BLUE << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & str, PresidentialPardonForm const & form){
	str << BLUE << "Form's name: " << RESET << YELLOW << form.getName() << RESET << std::endl;
	str << BLUE << "Signed: " << RESET << YELLOW << form.getIsSigned() << RESET << std::endl;
	str << BLUE << "Sign Grade: " << RESET << YELLOW << form.getSignGrade() << RESET << std::endl;
	str << BLUE << "Execute Grade: " << RESET << YELLOW << form.getExecGrade() << RESET << std::endl;
	str << BLUE << "Form's target: " << RESET << YELLOW << form.getTarget() << RESET << std::endl;
	return (str);	
}