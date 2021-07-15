#pragma once

# include <iostream>
# include <string>

class Form
{

	public:

		Form();
		~Form();
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
