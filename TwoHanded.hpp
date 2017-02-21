#pragma once
#include "Weapon.hpp"

class TwoHanded : virtual public Weapon{
private:
	double toHandPow = 1.6;
protected:
	TwoHanded();
public:
	virtual ~TwoHanded();
	const double getHandPow() const;
	void setTwoHandPow(double extraPower);
	const double getTotalPow() const;
	string toString();
};