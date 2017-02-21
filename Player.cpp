#pragma once
#include "Player.hpp"

Player::Player(){}
Player::Player(const Point2d &vpos, double vnumlives, double vpower, bool vmove) {
	numLives = vnumlives;
	power = vpower;
	pos = new Point2d(vpos);
}
const Point2d * Player::getPos() const{
	return pos;
}
void Player::setPos(const Point2d &vpos){
	pos = new Point2d(vpos);
}
const double Player::getNumLives() const{
	return numLives;
}
void Player::setNumLives(double vnumlives){
	numLives = vnumlives;
}
void Player::setPower(double vpower){
	power = vpower;
}
const bool Player::getisInMat() const{
	return isInMat;
}
void Player::setisInMat(bool v){
	isInMat = v;
}
const bool Player::getisAlive() const{
	return isAlive;
}
void Player::setisAlive(bool v){
	isAlive = v;
}
Player::~Player() {
	delete pos;
}

string Player::toString() {
	stringstream ss;
	ss << "player num lives" << getNumLives() << "pos: (" << getPos()->getX() << "," << getPos()->getY() << ")";
	if (getisAlive())
		ss << "archer is alive";
	else
		ss << "archer is died";
	string s = ss.str();
	return s;

}