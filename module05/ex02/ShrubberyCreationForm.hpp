#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm( std::string target );
		//ShrubberyCreationForm( ShrubberyCreationForm const & src );
		void		action(Form const & f) const;
		~ShrubberyCreationForm();
		//ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );


};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );
