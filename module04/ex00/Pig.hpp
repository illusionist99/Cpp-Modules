#ifndef __PIG_HPP__
#define __PIG_HPP__

#include "Victim.hpp"

class Pig : public Victim
{

	Pig( void );

public:

	Pig( std::string name );

	Pig( const Pig & h);
	Pig operator=( const Pig & h);

	void	getPolymorphed( void ) const;
	~Pig( void );

};

#endif
