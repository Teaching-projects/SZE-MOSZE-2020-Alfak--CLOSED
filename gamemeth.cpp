
#include "game.h"

//a Game osztály metódusai kifejtve, leírás az osztályban

Game::Game(const Characters& A, const Characters& B) : A(A), B(B)
{
}

void Game::Fight(Characters& A, Characters& B) {
	//Elindúl a játék
	std::cout << "Game start" << "\n" << std::endl;
	//ez lesz a számoló
	int i;
	//Ki írja a kezdõ értékeit a karaktereknek
	std::cout << A.toString() << "\n\n";
	std::cout << B.toString() << "\n\n";
	//Itt lehet választani melyik karakter legyen az elsõ aki támad, Feltételezzük, hogy jó bementet kapunk amúgy input ellenörzés kéne. Habár itt csak 2 érték van de az i egyben kör számoló is ami elég nagy lehet ezért int a típusa.
	std::cout << "Choose starter. |0 is " << A.Getname() << "|  |1 is " << B.Getname() << "|" << std::endl;
	std::cin >> i;
	//Itt megy az oda vissza pofozgatás amíg az egyik élete el nem éri a 0-át
	while (A.GetHp() > 0 && B.GetHp() > 0)
	{
		if (i % 2 == 0) {
			std::cout << "Round: " << i + 1 << " " << A.Getname() << " -> " << B.Getname() << std::endl;
			B.SetHp(A);
			std::cout<<A.toString()<<"\n\n";
			std::cout << B.toString() << "\n\n";
			std::cout << "\n" << std::endl;
		}
		else {
			std::cout << "Round: " << i + 1 << " " << B.Getname() << " -> " << A.Getname() << std::endl;
			A.SetHp(B);
			std::cout << A.toString() << "\n\n";
			std::cout << B.toString() << "\n\n";
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


