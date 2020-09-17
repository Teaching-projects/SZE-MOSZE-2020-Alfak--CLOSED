
#include <iostream>
#include "character.h" 

#include <string>
//a characters osztály metódusai kifejtve, leírás az osztályban

Characters::Characters(std::string name, int Hp, int Dpr) {
	this->name = name;
	this->Dpr = Dpr;
	this->Hp = Hp;
}

std::string Characters::Getname() {
	return name;
}

int Characters::GetHp() {
	return Hp;
}

int  Characters::GetDpr() {
	return Dpr;
}

void Characters::SetHp(int NewHp) {
	if (NewHp < 0) {
		Hp = 0;
	}
	else {
		Hp = NewHp;
	}

}

void  Characters::toString() {
	std::cout << "Name: " << Getname() << " HP: " << GetHp() << " DPR: " << GetDpr() << std::endl;
}