#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon( std::string const & name, int apcost, int damage )
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	std::cout << "Default Constructor" << std::endl;
}

AWeapon::AWeapon( const AWeapon & src )
{
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	std::cout << "Copy Constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon( void )
{
	std::cout << "Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


std::string		AWeapon::getName( void ) const {

	return (this->_name);
}

int				AWeapon::getAPCost( void ) const {

	return (this->_apcost);
}

int				AWeapon::getDamage( void ) const {

	return (this->_damage);
}

void			AWeapon::attack( void ) const {

	std::cout << "Sound and Lighting Effects " << std::endl;
}


/* ************************************************************************** */