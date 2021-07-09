#include "Character.hpp"


Character::Character(std::string const & name) {

    _name = name;
    _ap = 40;
    _p = NULL;
}

Character::~Character( void ) {


}
int     Character::getAP() const  {

    return _ap;
}

void Character::recoverAP() {

    if (_ap < 40)
        _ap += 10;
    if (_ap > 40)
        _ap = 40;
}

void Character::equip(AWeapon *w) {

    _p = w;
}

void Character::attack(Enemy *e) {

    if (_p != NULL && _ap > _p->getAPCost()) {

        std::cout << _name << " attacks " << e->getType() << " with a " << _p->getName() << std::endl;
        _p->attack();
        e->takeDamage(_p->getDamage());
        _ap -= _p->getAPCost();
        if (e->getHP() == 0)
            e->~Enemy();
    }
}

AWeapon *Character::getWeapon() const {

    return _p;
}

std::ostream& operator<<(std::ostream& os, const Character& obj)
{
    if (obj.getWeapon() != NULL)
        os << obj.getName() << " has " << obj.getAP() << " AP and wield a " << obj.getWeapon()->getName() << std::endl;
    else
        os << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
    return os;
}

std::string Character::getName() const {

    return _name;
}


Character::Character(const Character & h) {

    _name = h.getName();
    _ap = h.getAP();
    _p = getWeapon();
}

Character Character::operator=(const Character & h) {

    _name = h.getName();
    _ap = h.getAP();
    _p = getWeapon();

    return (*this);
}

