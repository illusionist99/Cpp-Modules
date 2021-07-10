#include "AMateria.hpp"


AMateria::AMateria( std::string const & type )
{
	_type = type;
	_xp = 0;
}

// AMateria::AMateria( const AMateria & src )
// {
// }



AMateria::~AMateria()
{

}


std::string const & AMateria::getType() const {

	return _type;
}

unsigned int AMateria::getXP() const {

	return _xp;
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	_xp = rhs.getXP();
	_type = rhs.getType();
	return *this;
}



void		AMateria::use(ICharacter & target) {

	_xp += 10;
}
