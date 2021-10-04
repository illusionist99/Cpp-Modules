# include "span.hpp"


int Span::longestSpan( void ) {

    if (_index <= 1)
        throw Span::spanError();
    int *tmp = _mem;
    std::sort(tmp, tmp + _n);
    return (tmp[_n - 1] - tmp[0]);
}

int Span::shortestSpan( void ) {

    if (_index <= 1)
        throw Span::spanError();
    int *tmp = _mem;
    std::sort(tmp, tmp + _n);
    return (tmp[1] - tmp[0]);
}


void Span::addNumber( int number ) {
        
    if (_index >= _n)
        throw Span::storeFull();
    else {
        _mem[_index] = number;
        _index++;
    }
}

Span::~Span( void ) {

    if (_mem)
        delete [] _mem;
}

Span::Span( unsigned int n ) {

    _index = 0;
    _n = n;
    _mem =  new int[n];
}
