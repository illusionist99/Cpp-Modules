#pragma once

#include <string>
#include <iostream>

class Enemy
{

	Enemy( void );
	protected:
		int 		_hp;
		std::string _type;

	public:
		Enemy( int hp, std::string const & type );
		virtual ~Enemy();

		std::string getType() const;
		int getHP() const;

		Enemy operator=(const Enemy & h);
		Enemy(const Enemy & h);

		virtual void takeDamage( int );
};
