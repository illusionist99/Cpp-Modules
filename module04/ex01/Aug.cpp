#include "Aug.hpp"


Aug::Aug( void ) : AWeapon("AUG ", 5, 21) {}

Aug::~Aug() {}

void	Aug::attack( void )  const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


Aug::Aug(const Aug & h) : AWeapon(h) {

	*this = h;
}

