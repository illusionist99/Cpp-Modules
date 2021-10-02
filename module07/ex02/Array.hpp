# pragma once 

# include <iostream>

template < typename T >
class Array {

    private :
        unsigned int _n;
        T *_array;

    public :

        class outOffLimit : public std::exception {
            public:
                const   char  * what()  const throw () {
                    return "Array Index Out Of Bound";
                }
        };

        Array( void ) { _array = T();};

        Array( unsigned int n ) {_array = new T[n](); _n = n;};

        ~Array( void ) {};

        Array&  operator=( Array const & src ) {

            if (_array)
                delete _array;
            _n = src.size();
            _array = src.getArray();
            return (*this);
        };

        T&  operator[] ( unsigned int n ) {
            if (n >= _n )
            {
                throw outOffLimit();
                exit(0);
            }
            return _array[n];

        };

        Array( Array const & src) {
            if (_array)
                delete _array;
            _n = src.size();
            _array = src.getArray();
        };
        
        T   *getArray( void ) const { return _array; };
        unsigned int size() const {return _n;};
};