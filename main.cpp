

#include "game.h" 

//Alf�k megold�sa
//felesleges tesztel�shez haszn�lt k�dok kiszedve.


int main(int argc, char* argv[])
{
    

    //argumentum ellen�rz�s. Ha valaki megadja az �sszes argumentumot az ind�t�sn�l akkor ezek sz�ma 7(a program neve+2*3 param�ter: n�v,hp,dpr)
   if (argc < 7) {
        std::cout << "Please give all of the arguments when you start the programe It will work. Or change the comments in the programe if you are a pussycat, it works just as well. #the programmer " << std::endl; //ha valaki nem adn� meg akkor a program nem hal meg.
        return 1;                                                                                                                                                                                     //vicces �zenet ami jelzi a hib�t, ha kell a kommentek kiszed�s�vel lehet m�s fut�st is ind�tani
    }
    //Ha megvan mind a 7 adat akkor l�trej�nnek a karakterek �s fut a program ahogy kell, a stoi az�rt kell mert arz argv t�mb alapvet�en karaktert�mb �s kell t�pus konvert�l�s a m�k�d�shez.
    else {
        Characters A((std::string)argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
        Characters B((std::string)argv[4], std::stoi(argv[5]), std::stoi(argv[6]));
       
        Game NewGame(A, B); //A j�t�k oszt�ly p�ld�nya "elind�t" egy �j j�t�kot A �s B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kieg�sz�tett�k azzal, hogy a fut�sn�l v�lasztani lehet hogy melyik karakter kezdje az �t�st.
        NewGame.Fight(A,B);    //Elind�tja a j�t�k Fight met�dus�t( A �s B karakter felv�tolt �t�se)
    }

   
    
    
    return 0;
}



