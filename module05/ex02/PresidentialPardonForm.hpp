#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm( std::string target );

		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& e);
		
		~PresidentialPardonForm();
		

		void		action(Form const & f) const;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

