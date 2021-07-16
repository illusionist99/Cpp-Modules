#pragma once

# include <iostream>
# include <string>

class Form
{

	public:

		Form();
		~Form();
	
	private:

		std::string _name;		
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
