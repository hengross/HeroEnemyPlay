#pragma once
#include "TwoHanded.hpp"

class Staff : public TwoHanded{
public:
	Staff();
	Staff(double power, const Point2d &pos);
	~Staff();
	string toString();
};