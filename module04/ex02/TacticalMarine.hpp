#pragma once

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();


		virtual ~TacticalMarine();

		TacticalMarine(TacticalMarine const & rhs);

		TacticalMarine &operator=( TacticalMarine const & rhs );

		void	rangedAttack() const;
		void	meleeAttack() const;
		void	battleCry() const;

		ISpaceMarine* clone() const;

	private:
		ISpaceMarine *_marine;

};
