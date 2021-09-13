#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	if (grade >= 1 && grade <= 150)
		_grade = grade;
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighExeption();
	else
		throw Bureaucrat::GradeTooLowExeption();
}

Bureaucrat::~Bureaucrat()
{
}

void 	Bureaucrat::signForm(Form & src) const {

	if (src.getSign() == true) {

		std::cout << _name << " Cannot Sign " << src.getName() << " Because it is already Signed" << std::endl;
	}
	else if (src.getGradeToSign() > _grade)
		std::cout << _name << " Cannot Sign " << src.getName() << " Because Grade Too low" << std::endl;
	else
		std::cout << _name << " Signs " << src.getName() << std::endl;

}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& e) {

	_grade = e.getGrade();
	return (*this);
}

void	Bureaucrat::incrementGrade( void ) {

	_grade -= 1;
	if ( _grade > 150)
		throw Bureaucrat::GradeTooHighExeption();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooLowExeption();
}

void	Bureaucrat::decrementGrade( void ) {

	_grade += 1;
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighExeption();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooLowExeption();
}

std::string Bureaucrat::getName( void ) const {

	return _name;
}

int	Bureaucrat::getGrade( void ) const {

	return _grade;
}

