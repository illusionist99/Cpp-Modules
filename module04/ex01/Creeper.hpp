#pragma once

#include "Enemy.hpp"

class   Creeper :  public Enemy
{

    public:
        Creeper();
        virtual ~Creeper( void );


        Creeper(const Creeper & h);
        
        void takeDamage( int );
};
