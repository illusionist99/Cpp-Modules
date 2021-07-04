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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


void		AMateria::use(ICharacter & target) {

	_xp += 10;
}