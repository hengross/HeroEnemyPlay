#pragma once
#include "Wand.hpp"

Wand::Wand(){}
Wand::Wand(double power, const Point2d &pos) : Weapon(power, pos){}
Wand::~Wand(){};
string Wand::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}