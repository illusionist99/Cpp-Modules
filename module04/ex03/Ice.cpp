#include "Ice.hpp"


Ice::Ice(  ) : AMateria("ice")
{
}


Ice::~Ice()
{
}


// Ice::Ice( Ice const & src )  : AMateria( src ) {

// 	*this = src;
// }



AMateria* Ice::clone() const {

	AMateria *n = new Ice();
	return n;
}

void Ice::use(ICharacter & target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
