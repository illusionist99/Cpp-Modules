#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( std::string name)
{
	_name = name;
	*_slots = NULL;
	_index = 0;
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

	if (_index >= 0 && _index < 4) {
	
		_slots[_index] = m;
		_index += 1;
	}

}


void Character::unequip(int idx) {

	_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx < 4)
		_slots[idx]->use(target);
}