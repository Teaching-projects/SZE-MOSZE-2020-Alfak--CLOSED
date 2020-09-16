# SZE-MOSZE-2020-Alfak
Ezt a programot az Alfak csapata készítette a Modern Szoftverfejlesztési Eszközök tantárgy részeként.
#### A program rövid ismertetése:
A Classes.h file tartalmazza a Characters és a Game osztályokat. A Characters-ben megtalálhatóak a karakterek adatai, azaz a név, az élet, valamint az ütés erőssége. Itt található egy karakter létrehozó függvény is, mellyel futás közben is megadhatjuk a karakterek értékeit. Ez a rész nem szükséges az alapfeladathoz. A SetHp segítségével beállítható az adott karakter élete, a harc közben is ezt hívja meg a program, így amikor a szám negatívvá válna, akkor is 0 lesz, egyéb esetben pedig az új értéket kapja meg. A toString pedig kilistázza a karakterek adatait, így könnyebben átlátható lesz a kód. A Game oszály két karaktert vár bemenetként, majd a Fight metódus lefuttatja a két karakter közti harcot. A megoldás a megadott feladattól annyiban tér el, hogy ki tudjuk választani, hogy mely karakter kezdje a harcot. A folyamat végén pedig a program kijelzi a vesztest és a győztest. Ezek ismeretében a main.cpp először ellenőrzi a megadott argumentumokat, hibás adatok esetén egy vicces hibaüzenetet kapunk, helyes adatok esetén pedig lefut a program. Tehát megadjuk melyik karakter kezdje a harcot, majd egymást felváltva támadják, amíg az egyikük meg nem hal, s ezzel véget nem ér a játék.
