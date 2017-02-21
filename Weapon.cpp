#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(double power, const Point2d &pos) : Item(pos,power){};
Weapon::~Weapon(){};
string Weapon::toString() {
	stringstream ss;
	ss << "weapon position: (" << getLoaction()->getX() << "," << getLoaction()->getY() << ")" << getHandPow() <<getTotalPow();
	string s = ss.str();
	return s;
}