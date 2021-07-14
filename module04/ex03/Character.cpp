#include "Character.hpp"

Character::Character( std::string name) : ICharacter()
{
	_name = name;
	_slots[0] = NULL;
	_slots[1] = NULL;
	_slots[2] = NULL;
	_slots[3] = NULL;

	_index = 0;
}

Character::Character( const Character & src ) : ICharacter()
{
	_name = src._name;
	_index = src._index;
	int i;

	i = -1;
	while (++i < _index)
		_slots[i] = src._slots[i];
}



Character::~Character() {
}

int	Character::getIndex() const {

	return _index;
}

Character &				Character::operator=( Character const & rhs )
{
	_name = rhs._name;
	_index = rhs._index;
	int i;

	i = -1;
	while (++i < _index)
		_slots[i] = rhs._slots[i];
	return *this;
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

	if (idx >= 0 && idx < _index)
		_slots[idx]->use(target);
}
