#include "Sorcerer.hpp"

// int	main(int argc, char const *argv[])
// {
// 	Sorcerer	khona("", "");
// 	Victim 		v("l");
// 	Peon 		b("f");
// 	Dog			n("snoop");

// //	std::cout << khona;
// 	khona.polymorph(v);
// 	khona.polymorph(b);
// 	khona.polymorph(n);
// 	return (0);
// }

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	return 0;
}