#include "Enemy.hpp"

Enemy::Enemy( int hp, std::string const & type) {

	_hp = hp;
	_type = type;

}

Enemy::~Enemy() {
}

std::string Enemy::getType() const {

	return _type;
}

int Enemy::getHP() const {

	return _hp;
}

void	Enemy::takeDamage( int damage ) {


	if (damage <= 0)
		return ;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}