#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__


#include <iostream>
#include "Brain.hpp"

class Human {
    public:
        Brain  f;

        Human( void ) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~Human( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        Brain& getBrain( void ) {
            return this->f;
        }
        std::string identify( void ) {
            std::string id =  this->f.identify();
            return id;
        }
};

#endif
