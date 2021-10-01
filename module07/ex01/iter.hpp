# pragma once

# include <iostream>


template < typename T>
void    iter(T array[], int lenght, void (*function)(T const &)) {

    int i;

    i = 0;
    while (i < lenght) {
    
        function(array[i++]);
    }
}