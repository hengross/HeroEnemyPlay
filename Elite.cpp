#pragma once
#include "Elite.hpp"

Elite::Elite(){}
Elite::Elite(double numlives, double power, const Point2d &pos) : Enemy(numlives, power, pos){}
Elite::~Elite(){}