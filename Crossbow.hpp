#pragma once
#include "OneHanded.hpp"

class CrossBow : public OneHanded{
public:
	CrossBow();
	CrossBow(double power, const Point2d &pos);
	~CrossBow();
	string toString();
};