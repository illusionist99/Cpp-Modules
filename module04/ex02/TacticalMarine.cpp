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
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, TacticalMarine const & i )
{
	//o << "Value = " << i.getValue();
	return o;
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

