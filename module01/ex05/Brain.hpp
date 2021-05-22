#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <sstream> //for std::stringstream 
#include <string>  //for std::string

class Brain {
    public:
        Brain( void ) {
            std::cout << "Constructor Called" << std::endl;
        }
        ~Brain( void ) {
            std::cout << "Destructor Called" << std::endl;
        }
        std::string identify( void ) const {
            std::stringstream ss;
            ss << this;  
            return ss.str();
        }
};




#endif
