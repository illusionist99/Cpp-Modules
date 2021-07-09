#include "Zombie.hpp"



Zombie::Zombie( void ) : Enemy( 60, "Zombie" ) {

    std::cout << "RAAAAUUUUGHHHH !" << std::endl;
}


Zombie::~Zombie( void ) {

    std::cout << "RAAAAUUUUGHHHH RAAAAUUUUGHHHH !" << std::endl;
}


void	Zombie::takeDamage( int damage ) {


	if (damage <= 5)
		return ;
	_hp -= damage - 5;
	if (_hp < 0)
		_hp = 0;
}

Zombie::Zombie( const Zombie & h) : Enemy( h ) {

	*this = h;
}

// Zombie &Zombie::operator=(const Zombie & h)  {

// 	*this = h;
// 	return (*this);
// }
