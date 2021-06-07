#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle" , 5, 21 )
{
	std::cout << this->_name << " constructor Called" << std::endl;
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) : AWeapon(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

void 	PlasmaRifle::attack( void ) const {

	std::cout <<  "* piouuu piouuu piouuu *" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */