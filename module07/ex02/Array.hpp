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
                    return "Out Off Limit";
                }
        };

        Array( void ) { _array = new T();};
        Array( unsigned int n ) {_array = new T[n](); _n = n;};
        ~Array( void ) {
            // if (_array != NULL)
            //     delete [] _array;
        }
        T&  operator=( Array const & src ) {

            // if (_array)
            //     delete[] _array;
            //_n = src.size();
            //unsigned int i = 0;
            _n = src.size();
            _array = src.getArray();
            // while (i < _n) {
            //     _array[i] = src._array[i];
            //     i++;
            // }
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
            // if (_array)
            //     delete[] _array;
            _n = src.size();
            _array = src.getArray();
        };
        

        T   *getArray( void ) const { return _array; };
        unsigned int size() const {return _n;};
};