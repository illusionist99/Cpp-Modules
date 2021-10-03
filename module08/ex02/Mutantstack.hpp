# pragma once 

# include <iostream>
# include <string>

class Mutantstack : public std::stack
{

	public:

		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		//Mutantstack &		operator=( Mutantstack const & rhs );

	private:

};

//std::ostream &			operator<<( std::ostream & o, Mutantstack const & i );
