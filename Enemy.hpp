#pragma once
#include "Player.hpp"

class Enemy : public Player{
public:
	Enemy();
	Enemy(double numlives, double power, const Point2d &pos);
	virtual ~Enemy();
	void attack(Player* player);
	void damage(double enemypow);
	const double getPower() const;
};


