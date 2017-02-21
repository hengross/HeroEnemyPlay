#pragma once
#include "TwoHanded.hpp"

class Hammer : public TwoHanded{
public:
	Hammer();
	Hammer(double power, const Point2d &pos);
	~Hammer();
	string toString();
};