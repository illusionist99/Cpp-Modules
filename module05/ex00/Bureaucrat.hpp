#pragma once

# include <iostream>
# include <string>
# include <exception>

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
		int	getGrade( void ) const;

	private:

		std::string _name;
		int	_grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

