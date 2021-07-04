#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int _xp;
		std::string _type;
	
	public:

		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		~AMateria();

		std::string const & getType() const; // Returns the materia type
		unsigned int getXP() const ; // Returns the Materia's XP
		AMateria &		operator=( AMateria const & rhs );

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif 