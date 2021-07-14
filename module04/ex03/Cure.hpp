#pragma once 

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		virtual ~Cure();

		//Cure( Cure const & src );
		AMateria* clone() const;
		void use(ICharacter & target);

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

