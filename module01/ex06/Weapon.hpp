#ifndef __Weapon_HPP__
#define __Weapon_HPP__

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:

        Weapon( std::string msg ) : type(msg) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~Weapon( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        void setType( std::string t) {
            type = t;
        }
        const std::string getType() {
            return type;
        }
};

#endif
