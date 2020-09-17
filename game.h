#pragma once
#include <string.h>
#include <iostream>
#include "character.h"


#ifndef GAME_H
#define GAME_H


class Game
{
public:
	//Konstruktor ami 2 karaktert vár
	Game(Characters A, Characters B);

	//Ez a metódus futtatja le a harcot a megadott 2 karakter között. A megadott feladathoz képest minimális különbség, hogy ki lehet választani a kezdõ karaktert 0 vagy 1 és hogy kiírjuk a köröket. Mod 2 vel döntjük el melyik kör van(0 illetve páros szám vagy páratlan szám alapján)
	void Fight();

	//Privát adattagok
private:
	Characters A; //Az egik karakter
	Characters B; //A másik karakter.

};

#endif // !GAME_H