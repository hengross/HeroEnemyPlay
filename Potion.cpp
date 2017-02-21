#pragma once
#include "Potion.hpp"

Potion::Potion(){}
Potion::Potion(string potkind, int power, const Point2d &pos) : kindOfPot(potkind), Item(pos,power){}
Potion::~Potion(){};
const string Potion::getType() const{
	return kindOfPot;
}
void Potion::setType(const string type){
	kindOfPot = type;
}
const double Potion::getTotalPow() const{
	return pow;
}
string Potion::toString() {
	stringstream ss;
	ss <<"potion position:" <<getLoaction()->getX() <<"," <<getLoaction()->getY() <<"potion power" <<getTotalPow()<<"potion kind" << getType();
	string s = ss.str();
	return s;

}