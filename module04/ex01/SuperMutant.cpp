#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant()
{
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */