#pragma once
#include "Enemy.hpp"

Enemy::Enemy(){}
Enemy::Enemy(double numlives, double power, const Point2d &pos) : Player(pos, numlives, power, false){}
void Enemy::damage(double dam){
	numLives = numLives - dam;
}
void Enemy::attack(Player * player){
	player->damage(power);
}

const double Enemy::getPower() const{
	return power;
}

Enemy::~Enemy() {}