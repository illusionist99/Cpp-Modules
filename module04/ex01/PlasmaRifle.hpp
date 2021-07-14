#pragma once


#include "AWeapon.hpp"



class PlasmaRifle : public AWeapon
{


	public:
		PlasmaRifle( void );
		virtual ~PlasmaRifle( void );

		PlasmaRifle(const PlasmaRifle & h);
		PlasmaRifle &operator=(const PlasmaRifle & h);

		void	attack( void ) const ;
};

