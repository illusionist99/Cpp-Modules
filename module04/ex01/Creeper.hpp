#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include "Enemy.hpp"

class   Creeper :  public Enemy
{

    public:
        Creeper();
        virtual ~Creeper( void );

       // Creeper &operator=(const Creeper & h);
        Creeper(const Creeper & h);
        void takeDamage( int );
};


#endif