#ifndef __VICTM_HPP__

# define __VICTM_HPP__


#include <iostream>
#include <string>


class Victim
{

protected:
	std::string _name;
	Victim();

public:

	Victim( std::string name);
	~Victim();
	std::string getName( void ) const ;
	void	getPolymorphed( void ) const;

};

std::ostream& operator<<(std::ostream& os, const Victim& dt);

#endif
