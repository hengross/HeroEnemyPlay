#pragma once
#include "Item.hpp"

Item::Item(){}
Item::Item(const Point2d &vpos, double vpow) : itemPos(new Point2d(vpos)),pow(vpow){}
const Point2d * Item::getLoaction() const{
	return itemPos;
}
void Item::setLocation(const Point2d &loc){
	itemPos = new Point2d(loc);
}
void Item::setItemPow(double vpow) {
	pow = vpow;
}
Item::~Item() {
	delete itemPos;
}
string Item::toString() {
	stringstream ss;
	ss <<"item position: (" <<getLoaction()->getX()<<"," << getLoaction()->getY() <<")";
	string s = ss.str();
	return s;

}