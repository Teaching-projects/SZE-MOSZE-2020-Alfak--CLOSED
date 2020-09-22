
#include "game.h"

//a Game oszt�ly met�dusai kifejtve, le�r�s az oszt�lyban

Game::Game(const Characters& A, const Characters& B) : A(A), B(B)
{
}

void Game::Fight(Characters& A, Characters& B) {
	//Elind�l a j�t�k
	std::cout << "Game start" << "\n" << std::endl;
	//ez lesz a sz�mol�
	int i;
	//Ki �rja a kezd� �rt�keit a karaktereknek
	std::cout << A.toString() << "\n\n";
	std::cout << B.toString() << "\n\n";
	//Itt lehet v�lasztani melyik karakter legyen az els� aki t�mad, Felt�telezz�k, hogy j� bementet kapunk am�gy input ellen�rz�s k�ne. Hab�r itt csak 2 �rt�k van de az i egyben k�r sz�mol� is ami el�g nagy lehet ez�rt int a t�pusa.
	std::cout << "Choose starter. |0 is " << A.Getname() << "|  |1 is " << B.Getname() << "|" << std::endl;
	std::cin >> i;
	//Itt megy az oda vissza pofozgat�s am�g az egyik �lete el nem �ri a 0-�t
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
	//Megn�zi hogy ki vesztett �s ki�rja, lehetne k�l�n met�dus is, lehet k�s�bb az is lesz ha a feladathoz kell.
	if (A.GetHp() == 0) {
		std::cout << A.Getname() << " DIED " << B.Getname() << " WINS\n" << std::endl;
	}
	else {
		std::cout << B.Getname() << " DIED " << A.Getname() << " WINS\n" << std::endl;
	}
}


