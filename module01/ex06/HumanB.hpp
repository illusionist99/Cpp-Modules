#ifndef __HUMANB_HPP__  
#define __HUMANB_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB {

    private:
        Weapon *w;
        std::string name;

    public:
        HumanB( std::string name ) : name(name) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~HumanB( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        void    attack( void ) {
            std::cout << this->name << " attacks with his " << w->getType() << std::endl;
        }
        void setWeapon(Weapon & s) {
            this->w = &s;
        }
};

#endif
