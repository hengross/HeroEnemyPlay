#pragma once
#include "OneHanded.hpp"

OneHanded::OneHanded(){}
OneHanded::~OneHanded(){};
const double OneHanded::getHandPow() const{
	return onHandPow;
}
void OneHanded::setOneHandPow(double vpow){
	onHandPow = vpow;
}
const double OneHanded::getTotalPow() const{
	return onHandPow*pow;
}
string OneHanded::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() << getTotalPow();
	string s = ss.str();
	return s;
}