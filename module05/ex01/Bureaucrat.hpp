#pragma once

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:

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

		Bureaucrat( const Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat& e);
		
		~Bureaucrat();

		void			incrementGrade( void );
		void			decrementGrade( void );
		std::string 	getName( void ) const;
		int				getGrade( void ) const;

		void 	signForm(Form & src) const;


	private:

		Bureaucrat();
		const std::string _name;
		int	_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

