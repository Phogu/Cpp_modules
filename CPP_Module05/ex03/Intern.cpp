#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

Intern::Intern(void){
	return ;
}
Intern::Intern(Intern const &src){
	*this = src;
	return ;
}
Intern::~Intern(void){
	return ;
}

Intern &	Intern::operator=(Intern const &copy){
	(void)copy;
	return (*this);
}

AForm *		Intern::makeForm(std::string const &nameForm, std::string const &target){
	std::string formName[] = {"PRESIDENTIALPARDON", "ROBOTOMYREQUEST", "SHRUBBERYCREATION"};
	int index = -1;
	AForm *form = NULL;
	for (int i = 0; i < 3; i++){
		if (nameForm == formName[i])
		{
			index = i;
			std::cout << BLUE << "Intern creates " << RESET << YELLOW << formName[index] << RESET << std::endl;
			break;	
		}
	}
	switch (index)
	{
	case 0 :
		form = new PresidentialPardonForm(target);
		return (form);
	case 1 :
		form = new RobotomyRequestForm(target);
		return (form);
	case 2 :
		form = new ShrubberyCreationForm(target);
		return (form);
	default:
		std::cout << RED <<"[ Error! Form's name is incorrect.]" << RESET << std::endl;
		break;
	}
	return (NULL);
}