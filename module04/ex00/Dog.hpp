#ifndef __Dog_HPP__
#define __Dog_HPP__

#include "Victim.hpp"

class Dog : public Victim
{

	Dog( void );

public:

	Dog( std::string name );

	Dog( const Dog & dpg);
	Dog operator=( const Dog & dpg);
	void	getPolymorphed( void ) const;
	~Dog( void );

};


#endif
