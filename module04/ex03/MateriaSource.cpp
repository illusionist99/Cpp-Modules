#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	_count = 0;
	_slots[0] = NULL;
	_slots[1] = NULL;
	_slots[2] = NULL;
	_slots[3] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	_count = src._count;

	_slots[0] = src._slots[0];
	_slots[1] = src._slots[1];
	_slots[2] = src._slots[2];
	_slots[3] = src._slots[3];
}


MateriaSource::~MateriaSource()
{
}



MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	_count = rhs._count;
	_slots[0] = rhs._slots[0];
	_slots[1] = rhs._slots[1];
	_slots[2] = rhs._slots[2];
	_slots[3] = rhs._slots[3];
	return *this;
}



void MateriaSource::learnMateria(AMateria* h) {

	if (_count >= 0 && _count < 4) {
	
		_slots[_count] = h;
		_count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	int i;

	i = -1;
	while (i++ < _count) {

		if (_slots[i]->getType() == type)
			return _slots[i];
	}
	return NULL;
}
