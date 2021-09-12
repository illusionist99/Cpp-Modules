#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm( std::string target );
		~RobotomyRequestForm();

		void		action(Form const & f) const;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

