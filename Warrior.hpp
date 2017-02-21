#pragma once
#include "Hero.hpp"

class Warrior : public Hero{
private:
	double radius = sqrt(2);

public:
	Warrior();
	Warrior(string vname, int vgender, double vnumlives, double vpower, const Point2d & pos);
	~Warrior();
	const double getRadius() const;
	void setRadius(double vradius);
	void setWeapon(Weapon* wep);
	void getPotion(Potion* potion);
	void use(Item* item);
	string toString();
};