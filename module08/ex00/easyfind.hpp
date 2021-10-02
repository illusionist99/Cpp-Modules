# pragma once

# include <iostream>

template< typename T>
int    easyfind(T & src, int n) {

    int i;
    int size;

    i = 0;
    size = sizeof(T) / sizeof(int);
    std::cout << "Size is " << size << std::endl;
    while (i < size) {
        if (src[i] == n)
            return (0);
        i++;
    }
    return (1);
}
