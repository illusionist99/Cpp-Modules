#include "Pig.hpp"

Pig::Pig( std::string name) : Victim( name ) {

	std::cout << "oink oink." << std::endl;
}

Pig::Pig( const Pig & h) : Victim(h) {

	_name = h.getName();
}

Pig Pig::operator=( const Pig & h) {

	_name = h.getName();
	return (*this);
}


Pig::~Pig( void ) {

	std::cout << "Grunt..." << std::endl;
}


void	Pig::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a black pony!" << std::endl;
}
