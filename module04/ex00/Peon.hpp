#ifndef __PEON_HPP__
#define __PEON_HPP__

#include "Victim.hpp"

class Peon : public Victim
{

	Peon( void );

public:

	Peon( std::string name );
	
	void	getPolymorphed( void ) const;
	~Peon( void );

};


#endif
