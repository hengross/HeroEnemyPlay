#pragma once
#include "Staff.hpp"

Staff::Staff(){}
Staff::Staff(double power, const Point2d &pos) : Weapon(power, pos){}
Staff::~Staff(){};
string Staff::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}