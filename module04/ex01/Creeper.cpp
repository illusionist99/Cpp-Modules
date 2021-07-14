#include "Creeper.hpp"



Creeper::Creeper( void ) : Enemy( 50, "Creeper" ) {

    std::cout << "SSSSSSSSHHHHHHHHHHH !" << std::endl;
}


Creeper::~Creeper( void ) {

    std::cout << "BOOOOOOM !" << std::endl;
}


void	Creeper::takeDamage( int damage ) {


	if (damage <= 15)
		return ;
	_hp -= damage - 15;
	if (_hp < 0)
		_hp = 0;
}

Creeper::Creeper( const Creeper & h) : Enemy( h ) {

	*this = h;
}
