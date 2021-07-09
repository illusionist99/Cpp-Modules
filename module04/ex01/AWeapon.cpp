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

AWeapon::AWeapon(const AWeapon & h) {

	_name = h.getName();
	_damage_points = h.getDamage();
	_ap_cost = h.getAPCost();
}

AWeapon& AWeapon::operator=(const AWeapon & h) {

	_name = h.getName();
	_damage_points = h.getDamage();
	_ap_cost = h.getAPCost();

	return (*this);
}
