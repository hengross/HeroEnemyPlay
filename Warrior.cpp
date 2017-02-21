#pragma once
#include "Warrior.hpp"

Warrior::Warrior():Hero(){}
Warrior::Warrior(string vname, int vgender, double vnumlives, double vpower, const Point2d & pos) : Hero(vname, vgender, vnumlives, vpower, pos){}
Warrior::~Warrior(){}
const double Warrior::getRadius() const{
	return radius;
}
void Warrior::setRadius(double vradius){
	radius = vradius;
}
void Warrior::setWeapon(Weapon* wep){
	if (wep == NULL){
		delete herowep;
	}
	else if (typeid(*wep) == typeid(Hammer)){
		if (herowep == nullptr && shiledArmor == nullptr){
			herowep = wep;
		}
		else if (herowep == nullptr && shiledArmor != nullptr){
			delete shiledArmor;
			herowep = wep;
		}
		else if (herowep->getTotalPow() < wep->getTotalPow()){
			if (shiledArmor != nullptr){
				delete shiledArmor;
				delete herowep;
				herowep = wep;
			}
			else
				delete herowep;
			herowep = wep;
		}
	}
	else if (typeid(*wep) == typeid(Sword)){
		if (herowep == nullptr)
			herowep = wep;
		else if (herowep->getTotalPow() < wep->getTotalPow()){
			delete herowep;
			herowep = wep;
		}
	}
}
void Warrior::getPotion(Potion* potion){
	if (potion->getType() == "health"){
		this->setNumLives(this->getNumLives() + potion->getTotalPow());
	}
}
void Warrior::use(Item* item){
	if (typeid(*item) == typeid(Hammer) || typeid(*item) == typeid(Sword)){
		setWeapon(dynamic_cast<Weapon*>(item));
	}
	else if (typeid(*item) == typeid(Potion)){
		getPotion(static_cast<Potion*>(item));
	}
	else if (typeid(*item) == typeid(BodyArmor) || typeid(*item) == typeid(ShieldArmor)){
		setArmor(static_cast<Armor*>(item));
	}
}

string Warrior::toString() {
	stringstream ss;
	ss << "Warrior radius:" << getRadius() << "Warrior power:" << getArmor() << "Warrior name:" << getName() << "pos: (" << getPos()->getX() << "," << getPos()->getY() << ")";
	if (getGender() == 1)
		ss << "gender: girl";
	else
		ss << "gender: boy";
	if (getisAlive())
		ss << "Warrior is alive";
	else
		ss << "Warrior is died";
	string s = ss.str();
	return s;

}
