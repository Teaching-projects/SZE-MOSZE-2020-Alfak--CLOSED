#pragma once

#include <string.h>
#include <iostream>
#ifndef CHARACTER_H
#define CHARACTER_H


//A harcoló karakterek osztálya
class Characters
{
public:
	Characters() {} //Megengedi, hogy paraméter nélkül is lehessen példányosítani


	//Paraméteres konstruktor Név, élet, ütés erõssé
	Characters(std::string name, int Hp, int Dpr);
	
	//Vissza adja a karakter nevét
	std::string Getname();

	//Vissza adja a karakter életét
	int GetHp();

	//Vissza adja a karakter ütés erõsségét
	int GetDpr();

	//Ezzel lehet állítani adott karakter életét, a harcnál is ez hívódik meg. Ha az új élet kevesebb mint 0 tehát negatív érték akkor az élet 0 lesz amúgy pedig az új értéket kapja meg.
	void SetHp(int NewHp);
	
	//Egyszerû tostring metótus amivel egyben ki lehet írni a karakter értékeit így szebb lesz a kód és könnyebb átlátni.
	void toString();

//Privát adattagok
private:
	std::string name; //A karakter neve
	int Hp;  //A karakter élete
	int Dpr; //A karakter ütés erõssége, Dpr = damage per round
};

#endif // !CHARACTER_H