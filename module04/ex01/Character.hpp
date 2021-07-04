#pragma once

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:

        std::string _name;
        int         _ap;
        AWeapon     *_p;
    
    public:
        Character(std::string const & name);
        ~Character();

        void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string getName() const;
        AWeapon *getWeapon() const;
        int     getAP() const ;
};

std::ostream& operator<<(std::ostream& os, const Character& obj);
