#include "Peon.hpp"

Peon::Peon( std::string name) : Victim( name ) {

	std::cout << "Zog zog." << std::endl;
}


Peon::~Peon( void ) {

	std::cout << "Blueark..." << std::endl;
}


void	Peon::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
