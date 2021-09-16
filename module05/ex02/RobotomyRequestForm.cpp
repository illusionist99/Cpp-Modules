#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	
}


void		RobotomyRequestForm::action(Form const & f) const {

	int i;

	i = rand() % 2;
	std::cout << "drilling noises" << std::endl;
	if (i == 0)
		std::cout <<  f.getName() << " has been robotomized successfully";
	else
		std::cout << f.getName() << " is a failure";

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj) {
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& e) {

	(void )e;
	return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}
