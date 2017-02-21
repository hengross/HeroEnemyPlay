#pragma once
#include "TwoHanded.hpp"

class Bow : public TwoHanded{
public:
	Bow();
	Bow(double power, const Point2d &pos);
	~Bow();
	string toString();
};