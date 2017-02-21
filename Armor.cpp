#pragma once
#include "Armor.hpp"

Armor::Armor(){}
Armor::Armor(double armorPow, const Point2d &pos) : Item(pos, armorPow){}
const double Armor::getTotalPow() const{
	return pow;
}
Armor::~Armor() {};

string Armor::toString() {
	stringstream ss;
	ss <<"armor position:" <<getLoaction()->getX()<<"," << getLoaction()->getY() <<"tatal power" <<getTotalPow();
	string s = ss.str();
	return s;

}