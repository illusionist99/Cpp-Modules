#pragma once


#include <iostream>
#include <string>

#include "Victim.hpp"
#include "Peon.hpp"
#include "Dog.hpp"
#include "Pig.hpp"

class Sorcerer
{

	Sorcerer( void );
	std::string _name;
	std::string _title;

public:

	std::string getName() const;
	std::string getTitle() const;
	
	Sorcerer( std::string name, std::string title );

	Sorcerer( const Sorcerer & h );
	Sorcerer operator=( const Sorcerer & h );

	void	polymorph( Victim const & ) const;

	~Sorcerer( void );
};


std::ostream& operator<<(std::ostream& os, const Sorcerer& dt);

