#include "Cure.hpp"



Cure::Cure() : AMateria("cure")
{
}

// Cure::Cure( const Cure & src )
// {
// }



Cure::~Cure()
{
}


Cure &				Cure::operator=( Cure const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

AMateria* Cure::clone( void ) const {


}

void Cure::use(ICharacter & target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}
