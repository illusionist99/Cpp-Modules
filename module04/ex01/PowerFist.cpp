#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50)
{
	std::cout << this->_name << " constructor Called" << std::endl;
}


PowerFist::PowerFist( const PowerFist & src ) : AWeapon(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PowerFist const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	 PowerFist::attack( void ) const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */