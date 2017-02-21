#pragma once
#include "OneHanded.hpp"

class Sword : public OneHanded{
public:
	Sword();
	Sword(double power, const Point2d &pos);
	~Sword();
	string toString();
};