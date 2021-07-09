#include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Dog	snoop("snoop");
	Pig biggy("biggy");


	std::cout << robert << jim << joe << snoop << biggy;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(snoop);
	robert.polymorph(biggy);
	return 0;
}