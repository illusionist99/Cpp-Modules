#ifndef __PLASMARIFLE__HPP__
#define __PLASMARIFLE__HPP__


#include "AWeapon.hpp"



class PlasmaRifle : public AWeapon
{


	public:
		PlasmaRifle( void );
		~PlasmaRifle( void );
		void	attack( void ) const ;
};


#endif