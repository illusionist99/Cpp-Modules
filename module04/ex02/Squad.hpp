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

		int				getCount( void ) const;
		ISpaceMarine* 	getUnit( int ) const;
		int				push(ISpaceMarine *u);

		Squad &		operator=( Squad const & rhs );

	private:
		int _count;
		t_unit *_unit;
};

