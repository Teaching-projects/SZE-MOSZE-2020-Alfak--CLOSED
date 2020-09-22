#pragma once
#include <string>
#include <iostream>



//A harcoló karakterek osztálya
class Characters
{
public:
	//Characters(); //Megengedi, hogy paraméter nélkül is lehessen példányosítani


	//Paraméteres konstruktor Név, élet, ütés erõssé
	Characters(const std::string name, int Hp,const int Dpr);
	
	//Vissza adja a karakter nevét
	const std::string& Getname();

	//Vissza adja a karakter életét
	const int& GetHp();

	//Vissza adja a karakter ütés erõsségét
	const int& GetDpr();

	//Ezzel lehet állítani adott karakter életét, a harcnál is ez hívódik meg. Ha az új élet kevesebb mint 0 tehát negatív érték akkor az élet 0 lesz amúgy pedig az új értéket kapja meg.
	void SetHp(Characters &X);
	
	//Egyszerû tostring metótus amivel egyben ki lehet írni a karakter értékeit így szebb lesz a kód és könnyebb átlátni.
	std::string toString();

//Privát adattagok
private:

	const std::string name; //A karakter neve
	int Hp;  //A karakter élete
	const int Dpr; //A karakter ütés erõssége, Dpr = damage per round
};

