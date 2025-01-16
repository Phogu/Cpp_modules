#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm::AForm("RobotomyRequestForm", 72, 45), _target("default"){
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm::AForm("RobotomyRequestForm", 72, 45), _target(target){
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm::AForm(src), _target(src.getTarget()){
	return ;
}
RobotomyRequestForm::~RobotomyRequestForm(void){
	return ;
}

RobotomyRequestForm const &	RobotomyRequestForm::operator=(RobotomyRequestForm const &copy){
	AForm::operator=(copy);
	this->putTarget(copy.getTarget());	
	return (*this);
}

void				RobotomyRequestForm::putTarget(std::string const & target){
	this->_target = target;
}
std::string const &	RobotomyRequestForm::getTarget(void) const{
	return (this->_target);
}

void				RobotomyRequestForm::beExecuted(Bureaucrat const &executor) const{
	int	success;

	srand((unsigned) time(NULL));
	success = rand() % 2;
	(void)executor;
	if (success)
		std::cout << YELLOW << this->_target << RESET << BLUE <<  " has been robotomized successfully 50\% of the time. " << RESET << std::endl;
	else
		std::cout << YELLOW << "the robotomy failed" << RESET << std::endl;
	return ;
}

std::ostream &				operator<<(std::ostream &str, RobotomyRequestForm const &form){
	str << BLUE << "Form's name: " << RESET << YELLOW << form.getName() << RESET << std::endl;
	str << BLUE << "Signed: " << RESET << YELLOW << form.getIsSigned() << RESET << std::endl;
	str << BLUE << "Sign Grade: " << RESET << YELLOW << form.getSignGrade() << RESET << std::endl;
	str << BLUE << "Execute Grade: " << RESET << YELLOW << form.getExecGrade() << RESET << std::endl;
	str << BLUE << "Form's target: " << RESET << YELLOW << form.getTarget() << RESET << std::endl;
	return (str);
}
