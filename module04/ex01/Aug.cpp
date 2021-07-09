#include "Aug.hpp"


Aug::Aug( void ) : AWeapon("AUG ", 5, 21) { 


}
Aug::~Aug() {

	//std::cout << "Default destructor Called" << std::cout;
}

void	Aug::attack( void )  const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


Aug::Aug(const Aug & h) : AWeapon(h) {

	*this = h;
}

// Aug &Aug::operator=(const Aug & h) {

// 	*this = h;
// 	return (*this);
// }
