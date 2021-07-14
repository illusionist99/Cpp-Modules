#pragma once

#include "Victim.hpp"

class Dog : public Victim
{

	Dog( void );

public:

	Dog( std::string name );

	Dog( const Dog & dpg);
	Dog operator=( const Dog & dpg);
	void	getPolymorphed( void ) const;
	virtual ~Dog( void );

};
