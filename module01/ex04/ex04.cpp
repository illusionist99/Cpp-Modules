#include <iostream>

int     main( void ) {
    std::string s = "HI THIS IS BRAIN";
    std::string&  p = s;

    std::cout << s << std::endl;
    std::cout << p << std::endl;
    return (0);
}