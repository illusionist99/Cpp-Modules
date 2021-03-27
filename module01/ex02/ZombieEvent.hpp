#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {

    public:
        void    SetZombieType( void );
        Zombie  *newZombie(std::string name);
};


#endif