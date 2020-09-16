

#include <iostream>
#include "Classes.h" //A classes azaz az osztályokat tartalmazó fejléc, most csak egy van mert nincs sok osztály, ha sok lesz akkor több header-be lesz bontva
#include <string>

//Alfák megoldása
//alternatív futási lehetõségekhez bent hagytuk a programban kommentként a tesztelésnél használt dolgokat, sose lehet tudni, ha majd nem kell a végsõ verziónál ebbõl semmi akkor kivesszük addig jó lehet még a tesztekhez.


int main(int argc, char* argv[])
{
    

    // A két példa karakter létrehozása az osztályban megadott konstruktor alapján Paraméterek: Név, Élet, Ütés erõ
    //Characters A("Maple",150,10);
    //Characters B("Sally",45,30);

    //argumentum ellenörzés. Ha valaki megadja az összes argumentumot az indításnál akkor ezek száma 7(a program neve+2*3 paraméter: név,hp,dpr)
    if (argc < 7) {
        std::cout << "Please give all of the arguments when you start the programe It will work. Or change the comments in the programe if you are a pussycat, it works just as well. #the programmer " << std::endl; //ha valaki nem adná meg akkor a program nem hal meg.
        return 1;                                                                                                                                                                                     //vicces üzenet ami jelzi a hibát, ha kell a kommentek kiszedésével lehet más futást is indítani
    }
    //Ha megvan mind a 7 adat akkor létrejönnek a karakterek és fut a program ahogy kell, a stoi azért kell mert arz argv tömb alapvetõen karaktertömb és kell típus konvertálás a mûködéshez.
    else {
        Characters A((std::string)argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
        Characters B((std::string)argv[4], std::stoi(argv[5]), std::stoi(argv[6]));
        Game NewGame(A, B); //A játék osztály példánya "elindít" egy új játékot A és B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kiegészítettük azzal, hogy a futásnál választani lehet hogy melyik karakter kezdje az ütést.
        NewGame.Fight();    //Elindítja a játék Fight metódusát( A és B karakter felvátolt ütése)
    }
    
    /*Characters A;
    Characters B;
    std::cout << "create player 1\n";
    A.Create();
    std::cout << "create player 2\n";                       //   Tesztelésnél használt karakter létrehozáshoz szükséges kódrész. Ha nem a példa adatokat használjuk hanem saját karaktereket akarunk létrehozni. Nem a feladat szoros része csak a jobb tesztelés miatt kellett.     
    B.Create();
    std::cout << "player 1: ";
    A.toString();
    std::cout << "player 2: ";
    B.toString();*/
  /*  Game NewGame(A, B); //A játék osztály példánya "elindít" egy új játékot A és B karakterrel. A karakterek sorrendje nem fontos mert az alap feladatot kiegészítettük azzal, hogy a futásnál választani lehet hogy melyik karakter kezdje az ütést.
    NewGame.Fight();    //Elindítja a játék Fight metódusát( A és B karakter felvátolt ütése)*/
    
    return 0;
}



