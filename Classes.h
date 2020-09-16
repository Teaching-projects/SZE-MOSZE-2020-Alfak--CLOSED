

#include <string.h>
#include <iostream>
// A metódusokat lehetne külön file-ba rakni de szerintem így jobban lehet látni, hogy melyik osztály mit tud. Esetleg az osztályokat külön header-be lehet rakni a jobb átláthatósághoz.
//A harcoló karakterek osztálya
class Characters
{
public:
	Characters() {	//Megengedi, hogy paraméter nélkül is lehessen példányosítani

	}
	//Paraméteres konstruktor Név, élet, ütés erõssé
	Characters(std::string name, int Hp, int Dpr) {
		this->name = name;
		this->Dpr = Dpr;
		this->Hp = Hp;
	}
	//Teszteléshez létrehozott karakter kreáló fügvény aminek a segítségével futás közben tudjuk megadni a karakterek értékeit. Az alapfeladathoz nem szükséges 
	void Create() {
		std::string name;
		int Hp;
		int Dpr;
		std::cout << "Name: ";
		std::cin >> name;
		std::cout << "HP: ";
		std::cin >> Hp;
		std::cout << "DPR: ";
		std::cin >> Dpr;
		std::cout << "\n";
		this->name = name;
		this->Dpr = Dpr;
		this->Hp = Hp;


	}
	//Vissza adja a karakter nevét
	std::string Getname() {
		return name;
	}
	//Vissza adja a karakter életét
	int GetHp() {
		return Hp;
	}
	//Vissza adja a karakter ütés erõsségét
	int GetDpr() {
		return Dpr;
	}
	//Ezzel lehet állítani adott karakter életét, a harcnál is ez hívódik meg. Ha az új élet kevesebb mint 0 tehát negatív érték akkor az élet 0 lesz amúgy pedig az új értéket kapja meg.
	void SetHp(int NewHp) {
		if (NewHp < 0) {
			Hp = 0;
		}
		else {
			Hp = NewHp;
		}

	}
	//Egyszerû tostring metótus amivel egyben ki lehet írni a karakter értékeit így szebb lesz a kód és könnyebb átlátni.
	void toString() {
		std::cout << "Name: " << Getname() << " HP: " << GetHp() << " DPR: " << GetDpr() << std::endl;
	}

	//Privát adattagok
private:
	std::string name; //A karakter neve
	int Hp;  //A karakter élete
	int Dpr; //A karakter ütés erõssége, Dpr = damage per round
};

// A játék osztály 
class Game
{
public:
	//Konstruktor ami 2 karaktert vár
	Game(Characters A, Characters B) {
		this->A = A;
		this->B = B;
	}
	//Ez a metódus futtatja le a harcot a megadott 2 karakter között. A megadott feladathoz képest minimális különbség, hogy ki lehet választani a kezdõ karaktert 0 vagy 1 és hogy kiírjuk a köröket. Mod 2 vel döntjük el melyik kör van(0 illetve páros szám vagy páratlan szám alapján)
	void Fight() {
		//Elindúl a játék
		std::cout << "Game start" << "\n" << std::endl;
		//ez lesz a számoló
		int i;
		//Ki írja a kezdõ értékeit a karaktereknek
		A.toString();
		B.toString();
		//Itt lehet választani melyik karakter legyen az elsõ aki támad, Feltételezzük, hogy jó bementet kapunk amúgy input ellenörzés kéne. Habár itt csak 2 érték van de az i egyben kör számoló is ami elég nagy lehet ezért int a típusa.
		std::cout << "Choose starter. |0 is " << A.Getname() << "|  |1 is " << B.Getname() << "|" << std::endl;
		std::cin >> i;
		//Itt megy az oda vissza pofozgatás amíg az egyik élete el nem éri a 0-át
		while (A.GetHp() > 0 && B.GetHp() > 0)
		{
			if (i % 2 == 0) {
				std::cout << "Round: " << i + 1 << " " << A.Getname() << " -> " << B.Getname() << std::endl;
				B.SetHp(B.GetHp() - A.GetDpr());
				A.toString();
				B.toString();
				std::cout << "\n" << std::endl;
			}
			else {
				std::cout << "Round: " << i + 1 << " " << B.Getname() << " -> " << A.Getname() << std::endl;
				A.SetHp(A.GetHp() - B.GetDpr());
				A.toString();
				B.toString();
				std::cout << "\n" << std::endl;
			}

			i++;


		}
		//Megnézi hogy ki vesztett és kiírja, lehetne külön metódus is, lehet késöbb az is lesz ha a feladathoz kell.
		if (A.GetHp() == 0) {
			std::cout << A.Getname() << " DIED " << B.Getname() << " WINS\n" << std::endl;
		}
		else {
			std::cout << B.Getname() << " DIED " << A.Getname() << " WINS\n" << std::endl;
		}
	}




	//Privát adattagok
private:
	Characters A; //Az egik karakter
	Characters B; //A másik karakter.

};







