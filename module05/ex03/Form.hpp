#pragma once

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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



		Form( std::string name, int grade_to_sign, int grade_to_execute );

		
		std::string getName() const;
		bool		getSign() const;


		int 		getGradeToSign() const;
		int 		getGradeToExecute() const;

		virtual		void		action(Form const & f) const;
	
		void		beSigned(Bureaucrat & src);
		void		execute(Bureaucrat const & executor) const;

		Form& operator=(const Form& e);

		~Form( );

	private:

		Form();
		int	checkGrade(int grade) const;
		const std::string _name;
		bool _is_signed;
		const int _grade_to_sign;
		const int _grade_to_execute;
		
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
