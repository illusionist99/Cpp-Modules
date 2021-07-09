#ifndef __SUPERMUTANT_HPP__
# define  __SUPERMUTANT_HPP__

#include "Enemy.hpp"

class   SuperMutant :  public Enemy
{

    public:
        SuperMutant();
        ~SuperMutant( void );

        SuperMutant( const SuperMutant & h);
        //SuperMutant &operator=(const SuperMutant & h);
        void takeDamage( int );
};

#endif
