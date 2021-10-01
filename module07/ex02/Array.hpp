# pragma once 

# include <iostream>

template < typename T >
class Array {

    private :
        unsigned int _n;
    public :

        Array( void ) { T empty; _n = 0; return T;};
        Array( unsigned int n ) {T empty[n] = new T[n]; _n = n; return T;};


        Array( Array const & src) {}
        operator=( Array const & src );

        operator[] ( unsigned int n );

        unsigned int size();
};