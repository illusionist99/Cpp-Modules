#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine( TacticalMarine const & src );
		~TacticalMarine();

		TacticalMarine &operator=( TacticalMarine const & rhs );
		void	rangedAttack() const;
		void	meleeAttack() const;
		void	battleCry() const;
		ISpaceMarine* clone() const;
	private:
		ISpaceMarine *_marine;
};

#endif
