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

		Intern(const Intern &obj);
		Intern operator=(const Intern &obj);

		~Intern();

		Form *makeForm( std::string name, std::string target );

};
