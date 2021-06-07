#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle( void );
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();
		void	attack() const;
		PlasmaRifle &		operator=( PlasmaRifle const & rhs );
};

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ***************************************************** PLASMARIFLE_H */