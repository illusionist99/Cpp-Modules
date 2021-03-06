#pragma once

#include "Victim.hpp"

class Pig : public Victim
{

	Pig( void );

public:

	Pig( std::string name );

	Pig( const Pig & h);
	Pig operator=( const Pig & h);

	void	getPolymorphed( void ) const;
	virtual ~Pig( void );

};
