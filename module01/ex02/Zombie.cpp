#include "Zombie.hpp"

void   Zombie::advert()
{
    std::cout << "< " << this->nom << " " << this->type << " >  Braiiiiiiinnnssss ..." << std::endl;
}

int main( void )
{
    Zombie l;

    l.nom = "hhhh";
    l.type = "ffff";
    l.advert();
    return (0);
}
