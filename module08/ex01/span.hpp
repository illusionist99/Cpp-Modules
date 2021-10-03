# pragma once 

# include <iostream>

class Span {


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

    private:
        unsigned int _n;
        unsigned int _index;
        Span( void ) { _index = 0; _mem = NULL;};
        int         * _mem;
 
    public:

        Span( unsigned int n ) {

            _index = 0;
            _n = n;
            _mem =  new int[n];
        };
        ~Span( void ) {
            if (_mem)
                delete [] _mem;
        }
        void addNumber( int number ) {
        
            if (_index > _n)
                throw Span::storeFull();
            else {
                _mem[_index] = number;
                _index++;
            }
        };

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

        int shortestSpan( void ) {

            if (_index <= 1)
                throw Span::spanError();
            int *tmp = _mem;
            std::sort(tmp, tmp + _n);
            return (tmp[1] - tmp[0]);
        }
        int longestSpan( void ) {

            if (_index <= 1)
                throw Span::spanError();
            int *tmp = _mem;
            std::sort(tmp, tmp + _n);
            return (tmp[_n - 1] - tmp[0]);
        }
};
