#pragma once
#include "Item.hpp"

class Armor : public Item{
protected:
	//double armorPow; //רמת הגנה
	//נשים את הבנאים במוגן - שלא יוכלו לייצר את האובייקט
	Armor();
	Armor(double armorPow, const Point2d &pos);
public:
	virtual ~Armor();
	const double getTotalPow() const;
	string toString();
};

