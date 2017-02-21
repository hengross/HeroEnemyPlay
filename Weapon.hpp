#pragma once
#include "Item.hpp"

class Weapon : public Item{
protected:
	Weapon();
	Weapon(double power, const Point2d &pos);
public:
	virtual ~Weapon();
	virtual const double getHandPow() const = 0;
	virtual const double getTotalPow() const = 0;
	string toString();
};