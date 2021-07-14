#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		virtual ~AssaultTerminator();

		AssaultTerminator( AssaultTerminator const & src );
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

		void	rangedAttack() const;
		void	meleeAttack() const;
		void	battleCry() const;
		ISpaceMarine* clone() const;

	private:
		ISpaceMarine *_marine;
};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );

#endif
