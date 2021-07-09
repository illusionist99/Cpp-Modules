#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include "Enemy.hpp"

class   Zombie :  public Enemy
{

    public:
        Zombie();
        virtual ~Zombie( void );

       // Zombie &operator=(const Zombie & h);
        Zombie(const Zombie & h);
        void takeDamage( int );
};


#endif