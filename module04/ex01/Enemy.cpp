#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy( int hp, std::string const & type )
{
	
}

Enemy::Enemy( const Enemy & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Enemy const & i )
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