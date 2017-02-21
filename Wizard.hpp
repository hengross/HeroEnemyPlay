#pragma once
#include "Hero.hpp"

class Wizard : public Hero{
private:
	double _radius = 3.0;

public:
	Wizard();
	Wizard(const string vname, int vgender, double numlives, double vpower, const Point2d & pos);
	~Wizard();
	const double getRadius() const;
	void setRadius(double radius);
	void setWeapon(Weapon * wep);
	void getPotion(Potion * potion);
	void use(Item * item);
	string toString();
};