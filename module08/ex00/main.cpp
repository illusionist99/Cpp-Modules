# include "easyfind.hpp"
# include <vector>
# include <list>

int     main( void ) {


    std::vector< int > f;
    std::list<int> h;
  
  
    for (int i = 0; i < 10; ++i)
    {
        h.push_back(i * 2);
        std::cout << i * 2 << std::endl;
    }
    f.push_back(10);
    f.push_back(5);
    f.push_back(0);

    try {
        easyfind(h, 0);
    }
    catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }
    try {
        easyfind(f, -9);
    }
    catch ( std::exception & e ) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}