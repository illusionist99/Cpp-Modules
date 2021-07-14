#include "Squad.hpp"


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

Squad::Squad()
{
	_unit = NULL;
	_count = 0;
}

Squad::Squad( const Squad & src )
{
	int i;

	i = 0;
	if (_count != 0) {

		while (_unit != NULL)
		{
			delete _unit->unit;
			_unit = _unit->next;
		}
		_unit = NULL;
	}
	_count = src.getCount();
	while (i < _count) {
	
		this->push(src.getUnit(i));
		i++;
	}
}


Squad::~Squad()
{
	while (_unit != NULL)
	{
		delete _unit->unit;
		_unit = _unit->next;
	}
	_unit = NULL;
	delete _unit;
}


Squad &				Squad::operator=( Squad const & rhs )
{
	int i;

	i = 0;
	if (_count != 0) {

		while (_unit != NULL)
		{
			delete _unit->unit;
			_unit = _unit->next;
		}
		_unit = NULL;
	}
	_count = rhs.getCount();
	while (i < _count) {
	
		this->push(rhs.getUnit(i));
		i++;
	}
	return *this;
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


int		Squad::push(ISpaceMarine *u) {

	int i;
	t_unit *t;
	t_unit *h;
	t_unit *d;

	i = 0;
	d = _unit;
	if (u == NULL)
		return getCount();
	while (d != NULL) {
	
		if (d->unit == u)
			return getCount();
		d = d->next;
	}
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
