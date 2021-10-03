# pragma once

# include <iostream>

template< typename T>
int    easyfind(T & src, int n) {

    typename T::iterator it;

    it = std::find(src.begin(), src.end(), n);
    if (it != src.end()) {
        std::cout << n << " Was Found\n";
        return 0;
    }
    std::cout << "Was not Found\n";
    return 1;
}
