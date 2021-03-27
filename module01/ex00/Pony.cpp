#include "Pony.hpp"

Pony::Pony(void)
{
    std::cout << "constructeur Called"  << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "destructeur Called"  << std::endl;
}

Pony    Pony::ponyOnTheStack( void )
{
    Pony onStack;
    std::cout << "Calling On The Stack" <<  std::endl;
    return (onStack);
}

Pony    *Pony::ponyOnTheHeap( void )
{
    Pony *pony = new Pony();
    std::cout << "Calling On The Heap" <<  std::endl;
    return (pony);
}