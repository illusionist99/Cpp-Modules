#include "Peon.hpp"

Peon::Peon( std::string name) : Victim( name ) {

	std::cout << "Zog zog." << std::endl;
}

	
Peon::Peon( const Peon & h) : Victim(h) {

	_name = h.getName();
}

Peon Peon::operator=( const Peon & h) {

	_name = h.getName();
	return (*this);
}


Peon::~Peon( void ) {

	std::cout << "Blueark..." << std::endl;
}


void	Peon::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
