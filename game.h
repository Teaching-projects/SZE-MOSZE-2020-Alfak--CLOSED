#pragma once
#include "character.h"





class Game
{
public:
	//Konstruktor ami 2 karaktert vár
	Game(const Characters& A, const Characters& B);

	//Ez a metódus futtatja le a harcot a megadott 2 karakter között. A megadott feladathoz képest minimális különbség, hogy ki lehet választani a kezdõ karaktert 0 vagy 1 és hogy kiírjuk a köröket. Mod 2 vel döntjük el melyik kör van(0 illetve páros szám vagy páratlan szám alapján)
	void Fight(Characters &A,Characters &B);

	//Privát adattagok
private:
	const Characters A; //Az egik karakter
	const Characters B; //A másik karakter.

};

