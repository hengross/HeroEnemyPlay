#pragma once
#include "Point2d.hpp"

Point2d::Point2d(){
	setX(0);
	setY(0);
}

Point2d::Point2d(int vx, int vy) {
	x = vx;
	y = vy;
}

Point2d::Point2d(const Point2d& other){
	setX(other.getX());
	setY(other.getY());
}

Point2d::~Point2d(){};

void Point2d::copy(const Point2d &point){
	setX(point.getX());
	setY(point.getY());
}

const int Point2d::getX() const{
	return x;
}

const int Point2d::getY() const{
	return y;
}

void Point2d::setX(int vx){
	x = vx;
}

void Point2d::setY(int vy){
	y = vy;
}
string Point2d::toString() {
	stringstream ss;
	ss <<"x:" << getX() <<"y:"<< getY();
	string s = ss.str();
	return s;
}