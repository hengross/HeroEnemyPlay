#pragma once
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

class Point2d{
private:
	int x;
	int y;
	void copy(const Point2d &point);
public:
	Point2d();
	Point2d(int vx, int vy);
	Point2d(const Point2d& other);
	~Point2d();
	void setX(int vx);
	void setY(int vy);
	const int getX() const;
	const int getY() const;
	string toString();
};