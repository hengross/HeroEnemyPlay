#pragma once
#include "Bow.hpp"

Bow::Bow(){}
Bow::Bow(double power, const Point2d &pos) : Weapon(power, pos){}
Bow::~Bow(){};
string Bow::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}