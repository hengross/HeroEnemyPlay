#pragma once
#include "Armor.hpp"

class BodyArmor : public Armor{
public:
	BodyArmor();
	BodyArmor(double pow, const Point2d &pos);
	~BodyArmor();
	string toString();
};