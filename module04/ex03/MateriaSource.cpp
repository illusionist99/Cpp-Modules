#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

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
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
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
