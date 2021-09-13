#pragma once

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		~Intern();
		// Form *createPpf( std::string target );
		// Form *createRrf( std::string target );
		// Form *createSrf( std::string target );


		Form *makeForm( std::string name, std::string target );

		private:
			static Form jump_table[5];
};

