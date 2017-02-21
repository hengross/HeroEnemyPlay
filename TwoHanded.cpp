#pragma once
#include "TwoHanded.hpp"

TwoHanded::TwoHanded(){}
TwoHanded::~TwoHanded(){};
const double TwoHanded::getHandPow() const{
	return toHandPow;
}
void TwoHanded::setTwoHandPow(double extraPower){
	toHandPow = extraPower;
}
const double TwoHanded::getTotalPow() const{
	return toHandPow*pow;
}
string TwoHanded::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}