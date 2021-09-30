# include "whatever.hpp"


int main( void ) {

    int a = 0;
    int b = 2;

    std::cout <<  "min is : " << min(a, b) << std::endl;
    std::cout << "max is : " << max(a, b) << std::endl;
    std::cout << "a : " << a << " B: " << b << std::endl;
    swap(&a, &b);
    std::cout << "a : " << a << " B: " << b << std::endl;

    return (0);
}