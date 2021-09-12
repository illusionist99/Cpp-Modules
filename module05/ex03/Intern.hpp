#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{

	public:

		Intern();
		~Intern();

		Form *makeForm( std::string name, std::string target );


};

