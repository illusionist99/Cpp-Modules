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
		virtual ~AMateria();

		std::string const & getType() const;
		unsigned int getXP() const ;
		AMateria &		operator=( AMateria const & rhs );

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif 