#pragma once

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Form : public Bureaucrat
{

	public:

		Form();
		~Form();

	private:
		std::string _name;
		bool _signed;
		int _execute;
		int _sign;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
