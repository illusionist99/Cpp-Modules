#ifndef __SUPERMUTANT_HPP__
# define  __SUPERMUTANT_HPP__

#include "Enemy.hpp"

class   SuperMutant :  public Enemy
{

    public:
        SuperMutant();
        ~SuperMutant( void );
        void takeDamage( int );
};

#endif
