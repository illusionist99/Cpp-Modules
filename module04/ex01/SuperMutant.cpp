#include "SuperMutant.hpp"


SuperMutant::SuperMutant( void ) : Enemy( 170, "Super Mutant" ) {

    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}


SuperMutant::~SuperMutant( void ) {

    std::cout << "Aaargh..." << std::endl;
}


void	SuperMutant::takeDamage( int damage ) {


	if (damage <= 3)
		return ;
	_hp -= damage - 3;
	if (_hp < 0)
		_hp = 0;
}

SuperMutant::SuperMutant( const SuperMutant & h) : Enemy( h ) {

	*this = h;
}

SuperMutant &SuperMutant::operator=(const SuperMutant & h)  {

	*this = h;
	return (*this);
}
