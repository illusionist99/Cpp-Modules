#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src )
{
	if ( this != &src )
		_marine = src.clone();
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	if ( this != &rhs )
		_marine = rhs.clone();
	return *this;
}


void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}


ISpaceMarine* AssaultTerminator::clone() const {

	return _marine;
}

