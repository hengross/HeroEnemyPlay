#pragma once
#include "Item.hpp"

class Potion : public Item{
private:
	string kindOfPot;
	string health = "health";
	string mana = "mana";
public:
	Potion();
	Potion(string potkind, int power, const Point2d &pos);
	~Potion();
	const string getType() const;
	const double getTotalPow() const;
	void setType(const string type);
	string toString();
};