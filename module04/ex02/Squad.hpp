#pragma once

# include <iostream>
# include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct s_unit
{
	ISpaceMarine	*unit;
	struct s_unit 	*next;

}				t_unit;

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();
		int getCount( void ) const;
		ISpaceMarine* getUnit( int ) const;
		Squad &		operator=( Squad const & rhs );
		int		push(ISpaceMarine *u);
	private:
		int _count;
		t_unit *_unit;
};

std::ostream &			operator<<( std::ostream & o, Squad const & i );

