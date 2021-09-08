#pragma once

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	class GradeTooHighExeption : public std::exception {
		
		const char * what () const throw () {
    
			return "GradeTooHighExeption";
   		}
	};

	class GradeTooLowExeption : public std::exception {
		
		const char * what () const throw () {

			return "GradeTooLowExeption";
		}
	};

	public:

		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		void	incrementGrade( void );
		void	decrementGrade( void );
		std::string getName( void ) const;
		int		getGrade( void ) const;
		void 	signForm(Form const  & src) const;
		void	executeForm(Form const & form);
	private:

		const std::string _name;
		int	_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

