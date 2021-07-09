#ifndef __AK47__HPP__
#define __AK47__HPP__


#include "AWeapon.hpp"



class Ak47 : public AWeapon
{


	public:
		Ak47( void );
		virtual ~Ak47( void );

		Ak47(const Ak47 & h);
		//Ak47 &operator=(const Ak47 & h);

		void	attack( void ) const ;
};


#endif