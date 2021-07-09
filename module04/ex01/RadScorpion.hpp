#ifndef __RADSCORPION_HPP__
# define __RADSCORPION_HPP__

#include "Enemy.hpp"

class   RadScorpion :  public Enemy
{

    public:
        RadScorpion();
        ~RadScorpion( void );

       // RadScorpion &operator=(const RadScorpion & h);
        RadScorpion(const RadScorpion & h);
        void takeDamage( int );
};


#endif