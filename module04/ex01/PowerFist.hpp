#ifndef __POWERFIST__HPP__
#define __POWERFIST__HPP__


#include "AWeapon.hpp"


class PowerFist : public AWeapon
{


	public:
		PowerFist();
		~PowerFist( void );
		void	attack( void ) const;
};


#endif