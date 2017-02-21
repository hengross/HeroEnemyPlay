#pragma once
#include "Crossbow.hpp"

CrossBow::CrossBow(){}
CrossBow::CrossBow(double power, const Point2d &pos) : Weapon(power, pos){}
CrossBow::~CrossBow(){};
string CrossBow::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}
