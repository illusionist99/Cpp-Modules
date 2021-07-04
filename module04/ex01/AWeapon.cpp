#include "AWeapon.hpp"

AWeapon::AWeapon( std::string const & name, int apcost, int damage)  {

	_name = name;
	_damage_points = damage;
	_ap_cost = apcost;

}


std::string AWeapon::getName() const {

	return _name;
}

int 	AWeapon::getAPCost() const {

	return _ap_cost;
}

int		AWeapon::getDamage() const {

	return _damage_points;

}


AWeapon::~AWeapon() {


}
