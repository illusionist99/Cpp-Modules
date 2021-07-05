#include "Ice.hpp"


Ice::Ice( void ) : AMateria("ice")
{
}

// Ice::Ice( const Ice & src ) 
// {
// }



Ice::~Ice()
{
}



Ice &				Ice::operator=( Ice const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


AMateria* Ice::clone() const {

	AMateria *n = new Ice();
	return n;
}

void Ice::use(ICharacter & target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}