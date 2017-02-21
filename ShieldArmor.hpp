#pragma once
#include "Armor.hpp"

class ShieldArmor : public Armor{
public:
	ShieldArmor();
	ShieldArmor(double armopow, const Point2d &pos);
	~ShieldArmor();
	string toString();
}; 