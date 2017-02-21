#pragma once
#include "Point2d.hpp"
#include "Enemy.hpp"

class Elite : public Enemy{
public:
	Elite();
	Elite(double numlives, double power, const Point2d &pos);
	~Elite();
};