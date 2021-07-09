#include "Victim.hpp"

Victim::Victim( std::string name ) {

	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std:: endl;
}

Victim::~Victim( void ) {

	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string 	Victim::getName( void ) const {

	return (this->_name);
}

std::ostream& operator<<(std::ostream& os, const Victim& dt) {

	os << "I'm " << dt.getName() << " and I like otters!" << std::endl;
	return os;
}

Victim::Victim( const Victim & h) {

	_name = h.getName();
}

Victim 	Victim::operator=(const Victim & h) {

	_name = h.getName();
	return (*this);
}

void	Victim::getPolymorphed( void ) const {

	std::cout << this->_name << "  has been turned into a cute little sheep!" << std::endl;
}
