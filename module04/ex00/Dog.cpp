#include "Dog.hpp"

Dog::Dog( std::string name) : Victim( name ) {

	std::cout << "Welcome to ggn news." << std::endl;
}


Dog::~Dog( void ) {

	std::cout << "..." << std::endl;
}


void	Dog::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into white pony!" << std::endl;
}

Dog Dog::operator=( const Dog & dpg) {

	_name = dpg.getName();
	return (*this);
}

Dog::Dog( const Dog & dpg) : Victim( dpg ) {

	_name = dpg.getName();
}
