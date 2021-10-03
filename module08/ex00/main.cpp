# include "easyfind.hpp"
# include <vector>

int     main( void ) {


    std::vector< int > f;
    f.push_back(10);
    f.push_back(5);
    f.push_back(0); 

    std::cout << easyfind(f, -90) << std::endl;
    return (0);
}