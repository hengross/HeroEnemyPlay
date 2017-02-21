#pragma once
#include "Player.hpp"
#include "Point2d.hpp"
#include "Weapon.hpp"
#include "OneHanded.hpp"
#include "Enemy.hpp"
#include "TwoHanded.hpp"
#include "Hammer.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include "Crossbow.hpp"
#include "Staff.hpp"
#include "Wand.hpp"
#include "Armor.hpp"
#include "BodyArmor.hpp"
#include "ShieldArmor.hpp"
#include "Potion.hpp"
#include <string>
#include <typeinfo>
using namespace std;

class Hero : public Player{
private:
	string name;
	int gender; //1 = girl 0 = boy
	Armor* bodyArmor = nullptr;
	const double checkDistance(const Point2d * loc, const Point2d & dest) const;
	Point2d * destPos = nullptr;
protected:
	Weapon * herowep = nullptr;
	Armor * shiledArmor = nullptr;
	Hero();
	Hero(const string name, int gender, double numlives, double power, const Point2d & pos);	
	

public:
	virtual ~Hero();
	const string getName() const;
	const int getGender() const;
	Weapon * getWeapon();
	const double getArmor() const;
	virtual const double getRadius() const = 0;
	void setName(const string vname);
	void setGender(int vgender);
	void setArmor(Armor * armor);
	void attack(Player * player);
	void damage(double d);
	const double getPower() const;
	void move(const Point2d * vdestpos);
	string toString();
	virtual void use(Item * item) = 0;
	virtual void setRadius(double radius) = 0;
	virtual void setWeapon(Weapon * vweap) = 0;
	virtual void getPotion(Potion * potion) = 0;
};
