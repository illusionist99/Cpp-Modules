#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) {

	std::cout << "Default Constructor called" << std::endl;
}

std::string Sorcerer::getName() const {

	return this->_name;
}

std::string Sorcerer::getTitle() const {

	return this->_title;
}

Sorcerer::Sorcerer( std::string name, std::string title) {

	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& dt) {

	os << "I am " << dt.getName() << ", " << dt.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

void	Sorcerer::polymorph( Victim const & v) const {

	v.getPolymorphed();
}


void	Sorcerer::polymorph( Dog const & v) const {

	v.getPolymorphed();
}


void	Sorcerer::polymorph( Peon const & v) const {

	v.getPolymorphed();
}

Sorcerer::~Sorcerer( void ) {

	std::cout << this->_name << ", " << this->_title <<
	", is dead. Consequences will never be the same!" << std::endl;
}



Sorcerer::Sorcerer( const Sorcerer & h ) {

	_name = h.getName();
	_title = h.getTitle();

}

Sorcerer Sorcerer::operator=( const Sorcerer & h ) {

	_name = h.getName();
	_title = h.getTitle();
	return (*this);
}

void	Sorcerer::polymorph( Pig const &v ) const {

	v.getPolymorphed();
}
