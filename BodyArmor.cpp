#pragma once
#include "BodyArmor.hpp"

BodyArmor::BodyArmor(){}
BodyArmor::BodyArmor(double pow, const Point2d &pos) : Armor(pow, pos){}
BodyArmor::~BodyArmor(){};

string BodyArmor::toString() {
	stringstream ss;
	ss << "armor position:" << getLoaction()->getX() << "," << getLoaction()->getY() << "tatal power" << getTotalPow();
	string s = ss.str();
	return s;
}