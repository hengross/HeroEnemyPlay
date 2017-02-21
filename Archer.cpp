#pragma once
#include "Archer.hpp"

Archer::Archer():Hero(){}
Archer::Archer(const string name, int gender, double vnumlives, double vpower, const Point2d& vpos) : Hero(name, gender, vnumlives, vpower, vpos){
}
const double Archer::getRadius() const{
	return radius;
}
void Archer::setRadius(double vradius){
	radius = vradius;
}
void Archer::setWeapon(Weapon* vheroWeapon){
	if (vheroWeapon == NULL){
		delete herowep;
	}
	else if (typeid(*vheroWeapon) == typeid(Bow)){
		if (herowep == nullptr && shiledArmor == nullptr){
			herowep = vheroWeapon;
		}
		else if (herowep == nullptr && shiledArmor != nullptr){
			delete shiledArmor;
			herowep = vheroWeapon;
		}
		else if (herowep->getTotalPow() < vheroWeapon->getTotalPow()){
			if (shiledArmor != nullptr){
				delete herowep;
				delete shiledArmor;
				herowep = vheroWeapon;
			}
			else
				delete herowep;
				herowep = vheroWeapon;
			}
	}
	else if (typeid(*vheroWeapon) == typeid(CrossBow)){
		if (herowep == nullptr)
			herowep = vheroWeapon;
		else if (herowep->getTotalPow() < vheroWeapon->getTotalPow()){
			delete herowep;
			herowep = vheroWeapon;
		}
	}
}
void Archer::getPotion(Potion* potion){
	if (potion->getType() == "health"){
		this->setNumLives(this->getNumLives() + potion->getTotalPow());
	}
}
void Archer::use(Item* item){
	if (typeid(*item) == typeid(Bow) || typeid(*item) == typeid(CrossBow)){
		setWeapon(dynamic_cast<Weapon*>(item));
	}
	else if (typeid(*item) == typeid(Potion)){
		getPotion(static_cast<Potion*>(item));
	}
	else if (typeid(*item) == typeid(BodyArmor) || typeid(*item) == typeid(ShieldArmor)){
		setArmor(static_cast<Armor*>(item));
	}
}
Archer::~Archer() {}

string Archer::toString() {
	stringstream ss;
	ss << "archer radius:" << getRadius() << "armor power:" << getArmor() <<"archer name:"<< getName() << "pos: ("<< getPos()->getX() <<","<< getPos()->getY() << ")";
	if (getGender() == 1)
		ss << "gender: girl";
	else
		ss << "gender: boy";
	if (getisAlive())
		ss << "archer is alive";
	else
		ss << "archer is died";
	string s = ss.str();
	return s;

}
