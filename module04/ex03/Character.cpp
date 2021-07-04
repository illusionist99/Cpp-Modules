#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( std::string name)
{
	_name = name;
	_slots = NULL;
}

Character::Character( const Character & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


std::string const & Character::getName() const {

	return _name;
}

void Character::equip(AMateria* m) {


}
void Character::unequip(int idx) {


}
void Character::use(int idx, ICharacter& target) {


}