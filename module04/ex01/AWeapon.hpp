#ifndef __AWEAPON_HPP__
#define __AWEAPON_HPP__

#include <iostream>
#include <string>

class AWeapon
{


protected:

	std::string _name;
	int		_damage_points;
	int		_ap_cost;

public:
	AWeapon( std::string const & namem, int apcost, int damage);
	virtual ~AWeapon( void );
	std::string getName() const;
	int 	getAPCost() const;
	int		getDamage() const;

	virtual void attack() const = 0;

	
};

#endif
