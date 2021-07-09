#ifndef __POWERFIST__HPP__
#define __POWERFIST__HPP__


#include "AWeapon.hpp"


class PowerFist : public AWeapon
{


	public:
		PowerFist();
		~PowerFist( void );
		
		PowerFist(const PowerFist &h );
		//PowerFist &operator=(const PowerFist &h);

		void	attack( void ) const;
};


#endif