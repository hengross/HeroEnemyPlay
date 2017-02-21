#pragma once
#include "OneHanded.hpp"

class Wand : public OneHanded{
public:
	Wand();
	Wand(double power, const Point2d &pos);
	~Wand();
	string toString();
};
