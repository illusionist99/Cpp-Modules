# pragma once

# include <iostream>

template< typename T>
void    easyfind(T & src, int n) {

    class notFound : public std::exception {
        public:
        const char * what( void ) const throw() {
        
            return "Not Found";
        };
    };
    typename T::iterator it;

    it = std::find(src.begin(), src.end(), n);
    if (it != src.end())
        std::cout << n << " Was Found\n";
    else
        throw notFound();
}
