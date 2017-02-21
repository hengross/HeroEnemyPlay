#pragma once
#include "Point2d.hpp"
#include <string>
#include <sstream>

using namespace std;

class Item{
protected:
	Point2d * itemPos = nullptr;
	double pow;
	Item();
	Item(const Point2d &loc, double rate);
public:
	virtual ~Item();
	const Point2d * getLoaction() const;
	void setLocation(const Point2d &loc);
	void setItemPow(double vpow);
	virtual const double getTotalPow() const = 0;
	string toString();
};
