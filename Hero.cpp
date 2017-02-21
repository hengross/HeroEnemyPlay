#pragma once
#include "Hero.hpp"
#include <cmath>

Hero::Hero(){}
Hero::Hero(const string name, int gender, double numlives, double power, const Point2d & pos) : name(name), gender(gender), Player(pos, numlives, power, true){}
Hero::~Hero(){
	delete bodyArmor;
	delete herowep;
	delete shiledArmor;
}
const string Hero::getName() const{
	return name;
}
const int Hero::getGender() const{
	return gender;
}
const double Hero::getPower() const{
	if (herowep != nullptr)
		return power*herowep->getTotalPow();
	else
		return power;
}
Weapon* Hero::getWeapon(){
	return herowep;
}
const double Hero::getArmor() const{
	if (bodyArmor != nullptr && shiledArmor != nullptr)
		return bodyArmor->getTotalPow() * shiledArmor->getTotalPow();
	else if (bodyArmor != nullptr && shiledArmor == nullptr)
		return bodyArmor->getTotalPow();
	else if (bodyArmor == nullptr && shiledArmor != nullptr)
		return shiledArmor->getTotalPow();
	else
		return 1.0;
}
void Hero::setName(const string vname){
	name = vname;
}
void Hero::setGender(int vgender){
	gender = vgender;
}

void Hero::setArmor(Armor* armor){
	if (armor != nullptr) {
		//BodyArmor* b = dynamic_cast<BodyArmor>(armor);
		//if the armor is from a bodyarmor kind
		//we will take the bodyarmor with the best deffence
		if (typeid(*armor) == typeid(BodyArmor)) {
			if (bodyArmor == nullptr)
				bodyArmor = armor;

			else if (bodyArmor->getTotalPow() < armor->getTotalPow()) {
				delete bodyArmor;
				bodyArmor = armor;
			}
		}
		else if (typeid(*armor) == typeid(ShieldArmor)) {
			//will take it if the weapon is from oneHanded kind
			//cout << "in side shield armor\n";
			if (herowep != nullptr) {
				if (herowep->getHandPow() == 1.6) {
					return;
				}
				else if (shiledArmor == nullptr) {
					shiledArmor = armor;
				}
				else if (shiledArmor->getTotalPow() < armor->getTotalPow()) {
					delete shiledArmor;
					shiledArmor = armor;
				}
			}
		}
	}
	else {
		delete bodyArmor;
		delete shiledArmor;
		return;
	}
}

void Hero::attack(Player * player){
	if (herowep != nullptr)
		player->damage(power*herowep->getTotalPow());
	else
		player->damage(power);
}
void Hero::damage(double dem){
	numLives = numLives - dem*this->getArmor();
}

void Hero::move(const Point2d * vdestpos){

	int y = pos->getY(), x = pos->getX();
	int ydest = vdestpos->getY(), xdest = vdestpos->getX();

	//in the end of matrix
	if (x == xdest && y == ydest){
		setisInMat(false); //dont need to move anymore
		return;
	}
	//the dest pos is above/dwon/right/left to current pos
	//right
	else if (x == xdest && ydest > y){
		pos->setY(y + 1);
		return;
	}
	//left
	else if (x == xdest && ydest < y){
		pos->setY(y - 1);
		return;
	}
	//above
	else if (y == ydest && xdest > x){
		pos->setX(x + 1);
		return;
	}
	//down
	else if (y == ydest && xdest < x){
		pos->setX(x - 1);
		return;
	}
	double a,b,c;
	//if we need to move forward
	//above and right
	if (xdest > x && ydest > y){
		//cheack the shortest way to move:
		a = checkDistance(vdestpos, Point2d(x , y + 1)); //to move above?
		b = checkDistance(vdestpos, Point2d(x + 1, y+1)); // to move above and right?
		c = checkDistance(vdestpos, Point2d(x + 1, y));//to move right?

		if (a < b && a < c){
			pos->setY(y + 1);
			return;
		}
		else if (b < a&& b < c){
			pos->setX(x + 1);
			pos->setY(y + 1);
			return;
		}
		else {
			pos->setX(x + 1);
			return;
		}
	}
	//above and left
	else if (xdest > x && ydest < y){
		a = checkDistance(vdestpos, Point2d(x + 1, y)); //to move above 
		b = checkDistance(vdestpos, Point2d(x + 1, y - 1));//to move above anf left
		c = checkDistance(vdestpos, Point2d(x , y - 1));//to move left

		if (a < b && a < c){
			pos->setX(x + 1);
			return;
		}
		else if (b < a && b < c){
			pos->setX(x + 1);
			pos->setY(y - 1);
			return;
		}
		else {
			pos->setY(y - 1);
			return;
		}
	}
	//dest pos is down and left
	else if (xdest < x && ydest < y){
		a = checkDistance(vdestpos, Point2d(x, y - 1)); //to move down
		b = checkDistance(vdestpos, Point2d(x - 1, y - 1));//to move down and left
		c = checkDistance(vdestpos, Point2d(x - 1, y));//to move left

		if (a < b && a < c){
			pos->setY(y - 1);
			return;
		}
		else if (b < a && b < c){
			pos->setX(x - 1);
			pos->setY(y - 1);
			return;
		}
		else {
			pos->setX(x - 1);
			return;
		}
	}
	//dest pos is down and right
	else if (xdest < x && ydest > y){
		a = checkDistance(vdestpos, Point2d(x - 1, y));//to move down
		b = checkDistance(vdestpos, Point2d(x - 1, y + 1));//ro move down and right
		c = checkDistance(vdestpos, Point2d(x, y + 1));//to move right
		if (a < b && a < c){
			pos->setX(x - 1);
			return;
		}
		else if (b < a && b < c){
			pos->setX(x - 1);
			pos->setY(y + 1);
			return;
		}
		else {
			pos->setY(y + 1);
			return;
		}
	}
}

const double Hero::checkDistance(const Point2d * loc, const Point2d & dest) const{
	int xdest = dest.getX();
	int ydest = dest.getY();
	int x = loc->getX();
	int y = loc->getY();
	return (double)(sqrt(pow((xdest - x), 2) + pow((ydest-y), 2)));
}

string Hero::toString() {
	stringstream ss;
	ss <<"hero num of lives:"<<getNumLives() <<"armor power:" << getArmor() << "archer name:" << getName() << "pos: (" << getPos()->getX() << "," << getPos()->getY() << ")";
	if (getGender() == 1)
		ss << "gender: girl";
	else
		ss << "gender: boy";
	if (getisAlive())
		ss << "archer is alive";
	else
		ss << "archer is died";
	string s = ss.str();
	return s;
}
