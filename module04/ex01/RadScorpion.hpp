#ifndef __RADSCORPION_HPP__
# define __RADSCORPION_HPP__

#include "Enemy.hpp"

class   RadScorpion :  public Enemy
{

    public:
        RadScorpion();
        ~RadScorpion( void );
        void takeDamage( int );
};


#endif