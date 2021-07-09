#ifndef __PLASMARIFLE__HPP__
#define __PLASMARIFLE__HPP__


#include "AWeapon.hpp"



class PlasmaRifle : public AWeapon
{


	public:
		PlasmaRifle( void );
		virtual ~PlasmaRifle( void );

		PlasmaRifle(const PlasmaRifle & h);
		//PlasmaRifle &operator=(const PlasmaRifle & h);

		void	attack( void ) const ;
};


#endif