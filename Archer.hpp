#pragma once
#include "Player.hpp"
#include "Hero.hpp"

class Archer : public Hero{
protected:
	double radius = 5;

public:
	Archer();
	Archer(const string name, int vgender, double vnumlives, double vpower, const Point2d & vpos);
	~Archer();
	const double getRadius() const;
	void setRadius(double vradius);
	void setWeapon(Weapon* vheroWeapon);
	void getPotion(Potion* potion);
	void use(Item* item);
	string toString();
};