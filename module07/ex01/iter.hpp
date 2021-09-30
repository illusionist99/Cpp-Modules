# pragma once

# include <iostream>


template < typename T>
void    iter(T &array, T lenght, T &function) {

    int i;

    i = 0;
    while (i < lenght) {
    
        function(array[i++]);
    }
}