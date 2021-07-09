#ifndef __PEON_HPP__
#define __PEON_HPP__

#include "Victim.hpp"

class Peon : public Victim
{

	Peon( void );

public:

	Peon( std::string name );

	Peon( const Peon & h);
	Peon operator=( const Peon & h);

	void	getPolymorphed( void ) const;
	virtual ~Peon( void );

};

#endif
