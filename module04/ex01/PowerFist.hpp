#pragma once


#include "AWeapon.hpp"


class PowerFist : public AWeapon
{


	public:
		PowerFist();
		virtual ~PowerFist( void );
		
		PowerFist(const PowerFist &h );


		void	attack( void ) const;
};

