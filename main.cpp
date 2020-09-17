

#include <iostream>
#include "game.h" 
#include <string>

//Alfák megoldása
//felesleges teszteléshez használt kódok kiszedve.


int main(int argc, char* argv[])
{
    

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
    
    
    
    return 0;
}



