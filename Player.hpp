#pragma once
#include "Point2d.hpp"
#include <sstream>
#include <string>
using namespace std;

class Player{
protected:
	Point2d * pos = nullptr;
	double numLives;
	double power;
	bool isInMat; //true if the player isnt outside of mat
	bool isAlive; //true if the player is alive
	Player();
	Player(const Point2d &vpos, double vnumlives, double vpower, bool vmove);
public:
	const Point2d* getPos() const;
	void setPos(const Point2d &vpos);
	const double getNumLives() const;
	void setNumLives(double vnumives);
	void setPower(double vpower);
	virtual void attack(Player * player) = 0;
	virtual void damage(double pAttack) = 0;
	const bool getisInMat() const;
	void setisInMat(bool v);
	const bool getisAlive() const;
	void setisAlive(bool v);
	virtual ~Player();
	string toString();
};