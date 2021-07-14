#include "RadScorpion.hpp"



RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion" ) {

    std::cout << "* click click click *" << std::endl;
}


RadScorpion::~RadScorpion( void ) {

    std::cout << "* SPROTCH *" << std::endl;
}


void	RadScorpion::takeDamage( int damage ) {


	if (damage <= 3)
		return ;
	_hp -= damage - 3;
	if (_hp < 0)
		_hp = 0;
}


RadScorpion::RadScorpion(const RadScorpion & h) : Enemy( h ) {

	*this = h;
}
