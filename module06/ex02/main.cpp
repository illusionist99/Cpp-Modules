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

   try {
        A& r1 = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception& e) {
    }

    try {
        B& r1 = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::exception& e) {}

    try {
        C& r1 = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception& e) {}
}


int     main( void ) {

    C test;
    A test0;
    B test1;
    Base &f = test; 
    Base &r = test0;
    Base &t = test1;
    Base *p = generate();


    identify(p);
    // C
    identify(f);
    // B
    identify(t);
    // A
    identify(r);
    return (0);
}