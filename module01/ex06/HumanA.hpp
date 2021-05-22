#ifndef __HUMANA_HPP__  
#define __HUMANA_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanA {

    private:
        Weapon *f;
        std::string name;

    public:
        HumanA( std::string name, Weapon & w ) : name(name), f(&w) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~HumanA( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        void    attack( void ) {
            std::cout <<  this->name << " attacks with his " << f->getType() << std::endl;
        }

};

#endif
