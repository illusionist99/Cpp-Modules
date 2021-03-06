#pragma once

#include <iostream>
#include <string>


class Victim
{

	protected:
		Victim( void );
		std::string _name;

	public:

		Victim( std::string name);
		virtual ~Victim();
		Victim( const Victim & h);
		std::string getName( void ) const ;
		void	getPolymorphed( void ) const;
		Victim operator=(const Victim & h);
};

std::ostream& operator<<(std::ostream& os, const Victim& dt);

