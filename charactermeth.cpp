
#include "character.h" 

//a characters osztály metódusai kifejtve, leírás az osztályban

Characters::Characters(const std::string name,int Hp,const int Dpr) : name(name), Hp(Hp), Dpr(Dpr)
{	
}



const std::string& Characters::Getname() {
	return name;
}

const int& Characters::GetHp() {
	return Hp;
}

const int&  Characters::GetDpr() {
	return Dpr;
}

void Characters::SetHp(Characters &X) {

	
	if (Hp - X.GetDpr() < 0) {
		Hp = 0;
	}
	else {
		Hp = Hp - X.GetDpr();
	}
	

}

 std::string Characters::toString() {
	std::string s; 
	s = "Name: " + Getname() + " Hp: " + std::to_string(GetHp()) + " SPR: " + std::to_string(GetDpr());
	return s;
}