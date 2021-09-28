# include "Base.hpp"
# include <iostream>

Base    *generate( void  ) {

    srand(time(NULL));
    int r;

    r = rand() % 3;
    if ( r == 0 )
        return (new A);
    else if ( r == 1 )
        return (new B);
    else
        return (new C);
}


void    identify( Base *p ) {



    if ((dynamic_cast<A*>(p)) != NULL)
        std::cout << "A" << std::endl;
    else if ((dynamic_cast<B*>(p)) != NULL)
        std::cout << "B" << std::endl;
    else if ((dynamic_cast<C*>(p)) != NULL)
        std::cout << "C" << std::endl;
}


void    identify( Base &p ) {

    // if ((dynamic_cast<A&>(p)) != NULL)
    //     std::cout << "A" << std::endl;
    // else if ((dynamic_cast<B&>(p)) != NULL)
    //     std::cout << "B" << std::endl;
    // else if ((dynamic_cast<C&>(p)) != NULL)
    //     std::cout << "C" << std::endl;

}


int     main( void ) {

    identify(generate());
    return (0);
}