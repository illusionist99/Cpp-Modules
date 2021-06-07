#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy( int hp, std::string const & type );
		Enemy( Enemy const & src );
		virtual ~Enemy();

		std::string virtual getType() const;
		int getHP() const;
		Enemy &		operator=( Enemy const & rhs );
		virtual void takeDamage( int );

	protected:
		int hp;
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */