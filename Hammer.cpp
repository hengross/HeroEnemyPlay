#pragma once
#include "Hammer.hpp"

Hammer::Hammer(){}
Hammer::Hammer(double power, const Point2d &pos) : Weapon(power, pos){}
Hammer::~Hammer(){};
string Hammer::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}