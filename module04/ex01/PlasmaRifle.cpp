#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21) { 


}
PlasmaRifle::~PlasmaRifle() {

	//std::cout << "Default destructor Called" << std::cout;
}

void	PlasmaRifle::attack( void )  const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


PlasmaRifle::PlasmaRifle(const PlasmaRifle & h) : AWeapon(h) {

	*this = h;
}

// PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle & h) {

// 	*this = h;
// 	return (*this);
// }
