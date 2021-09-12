#include "Form.hpp"


int	Form::checkGrade( int grade ) const {

	if (grade > 150)
		throw Form::GradeTooHighExeption();
	else if (grade < 1)
		throw Form::GradeTooLowExeption();
	return (grade);
}

std::string Form::getName() const {

	return (_name);
}
bool		Form::getSign() const {

	return (_is_signed);
}

int 		Form::getGradeToSign() const {

	return (_grade_to_sign);
}

int 		Form::getGradeToExecute() const {

	return (_grade_to_execute);
}

void		Form::execute(Bureaucrat const & executor) const {

	executor.signForm(*this);
	action(*this);
}


Form::Form(std::string name, int grade_to_sign, int grade_to_execute ) : _name(name), _grade_to_sign(checkGrade(grade_to_sign)), _grade_to_execute(checkGrade(grade_to_execute)) 
{
	_is_signed = false;
}

void		Form::beSigned(Bureaucrat & src) {

	checkGrade(src.getGrade());
	src.signForm(*this);
	_is_signed = true;

}

void		Form::action(Form const & f) const {

	(void )f;
}

Form::~Form()
{
}


std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", Form That requires " << i.getGradeToSign() << " To be Signed and " << i.getGradeToExecute() << " To be Executed" << std::endl;
	o << "This Form " << (i.getSign() == false ? "is Unsigned" : "is Signed") << std::endl;
	return o;
}
