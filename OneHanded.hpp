#pragma once
#include "Weapon.hpp"

class OneHanded : virtual public Weapon {
private:
	double onHandPow = 1.2;
protected:
	OneHanded();
public:	
	virtual ~OneHanded();
	const double getHandPow() const;
	void setOneHandPow(double vpow);
	const double getTotalPow() const;
	string toString();
};