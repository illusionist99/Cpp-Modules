#pragma once

#include "Enemy.hpp"

class   RadScorpion :  public Enemy
{

    public:
        RadScorpion();
        virtual ~RadScorpion( void );

        RadScorpion &operator=(const RadScorpion & h);
        RadScorpion(const RadScorpion & h);
        void takeDamage( int );
};
