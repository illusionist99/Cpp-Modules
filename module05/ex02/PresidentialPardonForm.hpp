#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm( std::string target );
	//	PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

	//	PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void		action(Form const & f) const;
	private:

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

