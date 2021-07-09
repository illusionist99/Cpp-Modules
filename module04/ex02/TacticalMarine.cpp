#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	if (this != &src)
		_marine = src.clone();
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}



TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	if ( this != &rhs )
		_marine = rhs.clone();
	return *this;
}



void	TacticalMarine::battleCry() const {

	std::cout << "For the holy PLOT!" << std::endl;
}


void	TacticalMarine::rangedAttack() const {

	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {

	std::cout << "* attacks with a chainsword *" << std::endl;

}


ISpaceMarine* TacticalMarine::clone() const {

	return _marine;
}

