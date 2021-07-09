#ifndef __VICTM_HPP__

# define __VICTM_HPP__


#include <iostream>
#include <string>


class Victim
{

		Victim( void );
	protected:
		std::string _name;

	public:

		Victim( std::string name);
		~Victim();
		Victim( const Victim & h);
		std::string getName( void ) const ;
		void	getPolymorphed( void ) const;
		Victim operator=(const Victim & h);
};

std::ostream& operator<<(std::ostream& os, const Victim& dt);

#endif
