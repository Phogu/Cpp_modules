#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("default"){
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target){
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm::AForm(src), _target(src.getTarget()){
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void){
	return ;
}

ShrubberyCreationForm const	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy){
	AForm::operator=(copy);
	this->putTarget(copy.getTarget());
	return(*this);
}

void				ShrubberyCreationForm::putTarget(std::string const & target){
	this->_target = target;
}
std::string const &	ShrubberyCreationForm::getTarget(void) const{
	return (this->_target);
}

void				ShrubberyCreationForm::beExecuted(Bureaucrat const &bureaucrat) const{
	std::ofstream	outfile;
	outfile.open((this->getTarget() +  "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << RED << "Could not open output file" << RESET << std::endl;
		return ;
	}
	outfile << this->getTarget() << TREE;
	outfile.close();
	std::cout << YELLOW << bureaucrat.getName() << RESET << BLUE << " successfully created a shrubbery" << RESET << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream &str, ShrubberyCreationForm const &form){
	str << BLUE << "Form's name: " << RESET << YELLOW << form.getName() << RESET << std::endl;
	str << BLUE << "Signed: " << RESET << YELLOW << form.getIsSigned() << RESET << std::endl;
	str << BLUE << "Sign Grade: " << RESET << YELLOW << form.getSignGrade() << RESET << std::endl;
	str << BLUE << "Execute Grade: " << RESET << YELLOW << form.getExecGrade() << RESET << std::endl;
	str << BLUE << "Form's target: " << RESET << YELLOW << form.getTarget() << RESET << std::endl;
	return (str);
}