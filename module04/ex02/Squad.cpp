#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	_unit = NULL;

	
}

Squad::Squad( const Squad & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	while (_unit != NULL)
	{
		delete _unit->unit;
		_unit = _unit->next;
	}
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Squad const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}



int Squad::getCount() const {

	int count;
	t_unit *a;

	a = _unit;
	count = 0;
	while (a != NULL)
	{
		count++;
		a = a->next;
	}
	return (count);
}

ISpaceMarine* Squad::getUnit(int n) const {

	int count;
	t_unit *a;

	a = _unit;
	count = 0;
	while (a != NULL && count != n)
	{
		count++;
		a = a->next;
	}
	return (a->unit);
}

int		Squad::push(ISpaceMarine *u) {

	int i;
	t_unit *t;
	t_unit *h;

	i = 0;
	if (u == NULL)
		return getCount();
	if (_unit == NULL)
	{
		_unit = new t_unit;
		_unit->unit = u;
		_unit->next = NULL;
		return getCount();
	}
	t = _unit;

	h = new t_unit;
	h->unit = u;
	h->next = NULL;
	while (t->next != NULL)
		t = t->next;
	t->next = h;
	return getCount();
}
