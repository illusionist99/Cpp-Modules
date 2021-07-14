#pragma once

#include "Enemy.hpp"

class   Zombie :  public Enemy
{

    public:
        Zombie();
        virtual ~Zombie( void );


        Zombie(const Zombie & h);
        void takeDamage( int );
};
