#include "Ak47.hpp"


Ak47::Ak47( void ) : AWeapon("Ak-47", 5, 21) {}


Ak47::~Ak47() {}

void	Ak47::attack( void )  const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


Ak47::Ak47(const Ak47 & h) : AWeapon(h) {

	*this = h;
}

