# pragma once 

# include <iostream>

class Span {

    private:
        unsigned int _n;
        unsigned int _index;
        Span( void ) { _index = 0; _mem = NULL;};
        int         * _mem;
 
    public:

        Span( unsigned int n );
        ~Span( void );
        void addNumber( int number );

        template < typename T> 
        void addNumber(T &src) {

            typename T::iterator it;
            if (_index  + src.size() > _n)
                throw Span::storeFull();
            int i;
        
            i = 0;
            it = src.begin();
            while (it != src.end()){
                _mem[_index++] = *it;
                it++;
            }
        };

        int shortestSpan( void );
        int longestSpan( void );

        class storeFull : public std::exception {
            public:
            const char  *what(void) const throw() {
                return "Store is Full";
                }
        };

        class spanError : public std::exception {
            public:
            const char *what(void) const  throw() {
                return "Not enought element";
            }
        };
};
