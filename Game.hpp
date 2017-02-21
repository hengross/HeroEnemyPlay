#pragma once
#include "Item.hpp"
#include "Player.hpp"
#include "Elite.hpp"
#include "Archer.hpp"
#include "Warrior.hpp"	
#include "Wizard.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


class Game {
public:
	/*
	matrix(rows.cols)
	*/
	char ** mat;
	int rows = 0;
	int	cols = 0;

	/*
	vector of all items
	map of all players and destination point
	*/
	vector<Item*> items;
	map <Player*, Point2d*> players;

	vector<Player*> erase_players;
	
	//bool _stillPlay;

	/*
	infileName = the file to read from
	*/
	string infileName;

	map<Player*, Point2d*>::iterator it = players.begin();

	bool IsOutsideMat( int posx, int posy);


	/*
	write the output to csv file
	*/
	void writeToFile();

	/*
	functions
	*/
	Game();
	~Game();
	/*
	get the inpute file to read from
	*/
	void createGame(string file);
	/*
	search if the hero we got from map has enemies in his radius 
	if he does - attck eachother
	*/
	void searchForEnemys( Hero * hero);
	/*

	*/
	void searchForItems( Hero * hero);
	/*
	read from the inpute file
	fill the matrix by data
	*/
	void read();
	/*
	if hero used item or if hero/enemy died - fill the mat without them
	*/
	void update();
	/*
	go on the map of players and move them
	every on step(with function move) - search for items and enemies
	after finish with hero go to next one
	*/
	void play();

	/*
	cheack radius between hero and item
	returns true if the utem inside hero radius =the distance smaller than hero radius
	*/
	bool cheackRad2(Hero* hero, Item* item);
	/*
	cheack radius between hero and enemy
	returns true if the enemy inside hero radius = the distance smaller than hero radius
	*/
	bool cheackRad(Hero* hero, Enemy* enemy);
};
