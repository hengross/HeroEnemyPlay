#pragma once
#include "Game.hpp"
//#include "Console.hpp"

class Console {
public:
	Console();
	/*
	void fillmat(Game &g);
	void print(Game &g);
	*/
	void fillMat(map<Player*, Point2d*> *m, vector<Item*> *items, char** mat);
	/*
	prints the char in the mat
	*/
	void printMat(char** mat, int cols, int rows);
	};