#include "Dog.hpp"

Dog::Dog( std::string name) : Victim( name ) {

	std::cout << "Welcome to ggn news." << std::endl;
}


Dog::~Dog( void ) {

	std::cout << "..." << std::endl;
}


void	Dog::getPolymorphed( void ) const {

	std::cout << this->_name << " has been turned into Snoop!" << std::endl;
}
