#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}



Cure::~Cure()
{
}

// Cure::Cure( Cure const & src )  : AMateria( src ) {

// 	*this = src;
// }



AMateria* Cure::clone( void ) const {

	AMateria *n =  new Cure();
	return n;
}

void Cure::use(ICharacter & target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}
