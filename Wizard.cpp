#pragma once
#include "Wizard.hpp"

Wizard::Wizard() :Hero(){}
Wizard::Wizard(const string vname, int vgender, double numlives, double vpower, const Point2d & pos) : Hero(vname, vgender, numlives, vpower, pos){}
Wizard::~Wizard(){}
const double Wizard::getRadius() const{
	return _radius;
}
void Wizard::setRadius(double radius){
	_radius = radius;
}
void Wizard::setWeapon(Weapon * wep){
	if (typeid(*wep) == typeid(Staff)){
		if (herowep == nullptr && shiledArmor == nullptr){
			herowep = wep;
		}
		else if (herowep == nullptr && shiledArmor != nullptr){
			herowep = wep;
			delete shiledArmor;
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
	else if (typeid(*wep) == typeid(Wand)){
		if (herowep == nullptr)
			herowep = wep;
		else if (herowep->getTotalPow() < wep->getTotalPow()){
			delete herowep;
			herowep = wep;
		}
	}
}

void Wizard::getPotion(Potion * potion){
	if (potion->getType()=="health" || potion->getType()=="mana"){
		this->setNumLives(this->getNumLives() + potion->getTotalPow());
	}
}
void Wizard::use(Item * item){
	if (typeid(*item) == typeid(Staff) || typeid(*item) == typeid(Wand)){
		setWeapon(dynamic_cast<Weapon*>(item));
	}
	else if (typeid(*item) == typeid(Potion)){
		getPotion(static_cast<Potion*>(item));
	}
	else if (typeid(*item) == typeid(BodyArmor) || typeid(*item) == typeid(ShieldArmor)){
		setArmor(static_cast<Armor*>(item));
	}
}

string Wizard::toString() {
	stringstream ss;
	ss << "wizard radius:" << getRadius() << "wizard power:" << getArmor() << "wizard name:" << getName() << "pos: (" << getPos()->getX() << "," << getPos()->getY() << ")";
	if (getGender() == 1)
		ss << "gender: girl";
	else
		ss << "gender: boy";
	if (getisAlive())
		ss << "wizard is alive";
	else
		ss << "wizard is died";
	string s = ss.str();
	return s;

}