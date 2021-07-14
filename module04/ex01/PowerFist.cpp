#include "PowerFist.hpp"


PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { 


}

void		PowerFist::attack( void )  const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {
	
}
		
PowerFist::PowerFist(const PowerFist &h )  : AWeapon( h ) {

	*this = h;
}

PowerFist &PowerFist::operator=(const PowerFist &h) {

	*this = h;

	return (*this);
}
