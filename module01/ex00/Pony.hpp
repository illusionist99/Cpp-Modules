#ifndef _PONY_HPP_
# define _PONY_HPP_

#include <iostream>

class Pony {

    public:

        Pony( void );
        ~Pony( void );

        std::string name;
        int         age;
        std::string skin_color;
        static Pony    ponyOnTheStack( void );
        static Pony    *ponyOnTheHeap( void );
};


#endif
