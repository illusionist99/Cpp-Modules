#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm();


		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& e);

		void		action(Form const & f) const;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );