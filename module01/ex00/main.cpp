#include "Pony.hpp"

int main( void )
{
    Pony  pony00 = Pony::ponyOnTheStack();
    Pony *pony01 = Pony::ponyOnTheHeap();

    pony00.name = "Lilia";
    pony00.age = 1;
    pony00.skin_color = "rgb";
    pony01->age = 5;
    pony01->name = "Hecarim";
    pony01->skin_color = "blue";
    std::cout << "My Name is " << pony00.name << std::endl;
    std::cout << "My Name is " << pony01->name << std::endl;
    delete pony01;
    return (0);
}