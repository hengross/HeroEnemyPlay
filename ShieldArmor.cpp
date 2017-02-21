#pragma once
#include "ShieldArmor.hpp"

ShieldArmor::ShieldArmor(){}
ShieldArmor::ShieldArmor(double armopow, const Point2d &pos) : Armor(armopow, pos){}
ShieldArmor::~ShieldArmor(){};

string ShieldArmor::toString() {
	stringstream ss;
	ss << "armor position:" << getLoaction()->getX() << "," << getLoaction()->getY() << "tatal power" << getTotalPow();
	string s = ss.str();
	return s;
}