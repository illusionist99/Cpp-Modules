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
		virtual ~Squad();

		Squad( Squad const & src );
		Squad &		operator=( Squad const & rhs );

		int				getCount( void ) const;
		ISpaceMarine* 	getUnit( int ) const;
		int				push(ISpaceMarine *u);

	private:
		int _count;
		t_unit *_unit;
};

