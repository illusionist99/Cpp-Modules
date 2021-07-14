#pragma once

#include "Enemy.hpp"

class   SuperMutant :  public Enemy
{

    public:
        SuperMutant();
        virtual ~SuperMutant( void );

        SuperMutant( const SuperMutant & h);
        SuperMutant &operator=(const SuperMutant & h);
        void takeDamage( int );
};
