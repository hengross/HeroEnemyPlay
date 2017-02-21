#pragma once
#include "Sword.hpp"

Sword::Sword(){}
Sword::Sword(double power, const Point2d &pos) : Weapon(power, pos){}
Sword::~Sword(){};
string Sword::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}