#ifndef __AUG__HPP__
#define __AUG__HPP__


#include "AWeapon.hpp"



class Aug : public AWeapon
{


	public:
		Aug( void );
		virtual ~Aug( void );

		Aug(const Aug & h);
		//Aug &operator=(const Aug & h);

		void	attack( void ) const ;
};


#endif