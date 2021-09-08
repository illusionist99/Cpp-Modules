#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm( std::string target );
		//RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		//RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		void		action(Form const & f) const;
	private:

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

