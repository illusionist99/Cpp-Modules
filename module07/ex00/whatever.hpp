# pragma once


# include <iostream>


template < typename min>
min   min(min a, min b) {

    return ((a > b) ? b : a);
};

template < typename max>
max max(max a, max b) {

    return ((a > b) ? a : b);
};


template < typename swapv>
void    swap(swapv *a, swapv *b) {

    swapv c = *b;
    *b = *a;
    *a = c;
};