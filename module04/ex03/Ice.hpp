#pragma once

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		virtual ~Ice();

		//Ice( Ice const & src );
		AMateria* clone( void ) const;
		void use(ICharacter & target);

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );
