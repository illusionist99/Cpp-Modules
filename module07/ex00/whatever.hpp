# pragma once


template < typename min>
min   min(min a, min b) {

    return ((a > b) ? b : a);
}

template < typename max>
max max(max a, max b) {

    return ((a > b) ? a : b);
}


template < typename swap>
void    swap(swap a, swap b) {

    swap c = b;
    b = a;
    b = c;
}