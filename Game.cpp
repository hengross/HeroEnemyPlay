#pragma once
#include "Game.hpp"
#include "Console.hpp"

Game::Game() {

}	

void Game::createGame(string file) {
	infileName = file;
}

void Game::read() {
	ifstream file(infileName);
	string str;
	while (getline(file, str)) {
		stringstream strstream(str);
		string s;
		while (getline(strstream, s, ',')) {
			if (s == "") {}
			else if (s == "matrix") {
				getline(strstream, s, ',');
				rows = stoi(s);
				getline(strstream, s, ',');
				cols = stoi(s);
				mat = new char*[rows];
				for (int i = 0; i < rows; ++i) {
					mat[i] = new char[cols];
				}
			}
			else if (s == "health") {
				getline(strstream, s, ',');
				int quentity = stoi(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Potion("health", quentity, Point2d(x, y)));
			}
			else if (s == "mana") {
				getline(strstream, s, ',');
				int quentity = stoi(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Potion("mana", quentity, Point2d(x, y)));
			}
			else if (s == "sword") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Sword(power, Point2d(x, y)));
			}
			else if (s == "bow") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Bow(power, Point2d(x, y)));
			}
			else if (s == "hammer") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Hammer(power, Point2d(x, y)));
			}
			else if (s == "staff") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Staff(power, Point2d(x, y)));
			}
			else if (s == "crossbow") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new CrossBow(power, Point2d(x, y)));
			}
			else if (s == "wand") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new Wand(power, Point2d(x, y)));
			}
			else if (s == "bodyarmor") {
				getline(strstream, s, ',');
				double rate = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new BodyArmor(rate, Point2d(x, y)));
			}
			else if (s == "shieldarmor") {
				getline(strstream, s, ',');
				double rate = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				items.push_back(new ShieldArmor(rate, Point2d(x, y)));
			}
			else if (s == "archer") {
				char * name = "Archer";
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				getline(strstream, s, ',');
				int endx = stoi(s);
				getline(strstream, s, ',');
				int endy = stoi(s);
				getline(strstream, s, ',');
				int gender = stoi(s);
				players.insert(pair<Archer*, Point2d*>(new Archer(name, gender, 100.0, power, Point2d(x, y)), new Point2d(endx, endy)));
			}
			else if (s == "warrior") {
				char * name = "Warrior";
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				getline(strstream, s, ',');
				int endx = stoi(s);
				getline(strstream, s, ',');
				int endy = stoi(s);
				getline(strstream, s, ',');
				int gender = stoi(s);
				players.insert(pair<Warrior*, Point2d*>(new Warrior(name, gender, 100.0, power, Point2d(x, y)), new Point2d(endx, endy)));
			}
			else if (s == "wizard") {
				char * name = "wizard";
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				getline(strstream, s, ',');
				int endx = stoi(s);
				getline(strstream, s, ',');
				int endy = stoi(s);
				getline(strstream, s, ',');
				int gender = stoi(s);
				players.insert(pair<Wizard*, Point2d*>(new Wizard(name, gender, 100.0, power, Point2d(x, y)), new Point2d(endx, endy)));
			}
			else if (s == "enemy") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				getline(strstream, s, ',');
				getline(strstream, s, ',');
				players.insert(pair<Enemy*, Point2d*>(new Enemy(100.0, power, Point2d(x, y)), new Point2d(x, y)));
			}
			else if (s == "elite") {
				getline(strstream, s, ',');
				double power = stod(s);
				getline(strstream, s, ',');
				int x = stoi(s);
				getline(strstream, s, ',');
				int y = stoi(s);
				getline(strstream, s, ',');
				getline(strstream, s, ',');
				players.insert(pair<Enemy*, Point2d*>(new Elite(100.0, power, Point2d(x, y)), new Point2d(x, y)));
			}
		}
	}
	file.close();
	//map<Player*, Point2d*>::iterator it = players.begin();
}

void Game::writeToFile() {
	ofstream outputfile;
	outputfile.open("g1_out.csv");
	outputfile << "world\n";
	outputfile << "type" << "," << "length" << "," << "height" << "\n";
	outputfile << "matrix" << "," <<  rows << "," <<  cols << "\n";
	for (it =  players.begin(); it !=  players.end(); ++it) {
		int x = it->first->getPos()->getX();
		int y = it->first->getPos()->getY();
		double lives = it->first->getNumLives();
		if (typeid(*it->first) == typeid(Archer)) {
			outputfile << "Archer";
			outputfile << ",";
			outputfile <<"( "<<x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" <<lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>(it->first);
			outputfile << "armor power: " <<hero->getArmor() << "," <<  "hero power" <<hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(*it->first) == typeid(Warrior)) {
			outputfile << "Warrior";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>(it->first);
			outputfile << "armor power: " << hero->getArmor() << "," << "hero power" << hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(*it->first) == typeid(Wizard)) {
			outputfile << "Wizard";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>(it->first);
			outputfile << "armor power: " << hero->getArmor() << "," << "hero power" << hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(*it->first) == typeid(Enemy)) {
			outputfile << "Enemy";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Enemy * enemy = static_cast<Enemy*>(it->first);
			outputfile << "enemy power" << enemy->getPower();
			outputfile << "\n";
		}
		else if (typeid(*it->first) == typeid(Elite)) {
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Enemy * enemy = static_cast<Enemy*>(it->first);
			outputfile << "elite power" << enemy->getPower();
			outputfile << "\n";
		}
	}
	
	for (size_t k = 0; k <  erase_players.size(); k++) {
		
		int x =  erase_players[k]->getPos()->getX();
		int y =  erase_players[k]->getPos()->getY();
		double lives =  erase_players[k]->getNumLives();
		if (typeid(* erase_players[k]) == typeid(Archer)) {
			outputfile << "Archer";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>( erase_players[k]);
			outputfile << "armor power: " << hero->getArmor() << "," << "hero power" << hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(* erase_players[k]) == typeid(Warrior)) {
			outputfile << "Warrior";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>( erase_players[k]);
			outputfile << "armor power: " << hero->getArmor() << "," << "hero power" << hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(* erase_players[k]) == typeid(Wizard)) {
			outputfile << "Wizard";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Hero * hero = static_cast<Hero*>( erase_players[k]);
			outputfile << "armor power: " << hero->getArmor() << "," << "hero power" << hero->getPower();
			outputfile << "\n";
		}
		else if (typeid(* erase_players[k]) == typeid(Enemy)) {
			outputfile << "Enemy";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Enemy * enemy = static_cast<Enemy*>( erase_players[k]);
			outputfile << "enemy power" << enemy->getPower();
			outputfile << "\n";
		}
		else if (typeid(* erase_players[k]) == typeid(Elite)) {
			outputfile << "elite";
			outputfile << ",";
			outputfile << "( " << x << " ";
			outputfile << y << " )";
			outputfile << ",";
			outputfile << "num lives:" << lives;
			outputfile << ",";
			Enemy * enemy = static_cast<Enemy*>( erase_players[k]);
			outputfile << "elite power" << enemy->getPower();
			outputfile << "\n";
		}
	}
	//print the matrix
	for (int i = 0; i <  rows; i++) {
		for (int j = 0; j <  cols; j++) {
			outputfile <<  mat[i][j] << ",";
		}
		outputfile << "\n";
	}
}

void Game::update() {
	map<Player*, Point2d*>::iterator it = players.begin();
	for (int i = 0; i <  rows; i++) {
		for (int j = 0; j <  cols; j++) {
			 mat[i][j] = '.';
		}
	}
	for (size_t k = 0; k <  items.size(); k++) {
		//item is an armor
		if (typeid(* items[k]) == typeid(Armor)) {
			int x =  items[k]->getLoaction()->getX();
			int y =  items[k]->getLoaction()->getY();
			 mat[x][y] = 'S';
		}
		//item is a potion
		else if (typeid(* items[k]) == typeid(Potion)) {
			int x =  items[k]->getLoaction()->getX();
			int y =  items[k]->getLoaction()->getY();
			 mat[x][y] = 'P';
		}
		//item is a weapon
		else if (typeid(* items[k]) == typeid(Bow) || typeid(* items[k]) == typeid(CrossBow) || typeid(* items[k]) == typeid(Hammer) ||
			typeid(* items[k]) == typeid(Sword) || typeid(* items[k]) == typeid(Staff) || typeid(* items[k]) == typeid(Wand)) {
			int x =  items[k]->getLoaction()->getX();
			int y =  items[k]->getLoaction()->getY();
			 mat[x][y] = 'W';
		}
	}
	for (it =  players.begin(); it !=  players.end(); ++it) {
		//it->first->setNumLives(100); ///
		if (typeid(*it->first) == typeid(Archer)) {
			int x = it->first->getPos()->getX();
			int y = it->first->getPos()->getY();
			 mat[x][y] = 'A';
		}
		else if (typeid(*it->first) == typeid(Warrior)) {
			int x = it->first->getPos()->getX();
			int y = it->first->getPos()->getY();
			 mat[x][y] = 'R';
		}
		else if (typeid(*it->first) == typeid(Wizard)) {
			int x = it->first->getPos()->getX();
			int y = it->first->getPos()->getY();
			 mat[x][y] = 'Z';
		}
		else if (typeid(*it->first) == typeid(Enemy)) {
			int x = it->first->getPos()->getX();
			int y = it->first->getPos()->getY();
			 mat[x][y] = 'E';
		}
		else if (typeid(*it->first) == typeid(Elite)) {
			int x = it->first->getPos()->getX();
			int y = it->first->getPos()->getY();
			 mat[x][y] = 'L';
		}
	}
}

bool Game::cheackRad(Hero* hero, Enemy* enemy) {
	bool inMyRad = false;
	double dis = sqrt(pow(hero->getPos()->getX() - enemy->getPos()->getX(), 2) + pow(hero->getPos()->getY() - enemy->getPos()->getY(), 2));
	if (dis <= hero->getRadius())
		inMyRad = true;
	return inMyRad;
}

bool Game::cheackRad2(Hero* hero, Item* item) {
	bool inMyRad = false;
	double hx = hero->getPos()->getX();
	double hy = hero->getPos()->getY();
	double ix = item->getLoaction()->getX();
	double iy = item->getLoaction()->getY();
	double dis = sqrt(pow(hx-ix, 2) + pow(hy-iy, 2));
	if (dis <= hero->getRadius())
		inMyRad = true;
	//
	//cout << dis << "dis rad\n";
	return inMyRad;
}

void Game::searchForEnemys( Hero* hero) {
	map<Player*, Point2d*>::iterator it2 = players.begin();
	for (it2 =  players.begin(); it2 !=  players.end(); ++it2) { // check enemy in distance
		if (typeid(*it2->first) == typeid(Enemy) || typeid(*it2->first) == typeid(Elite)) {
			Enemy* e = dynamic_cast<Enemy*>(it2->first);
			if (cheackRad(hero, e)) {
				hero->setisAlive(true);
				while (hero->getNumLives()>0 && it2->first->getNumLives()>0) {//
					hero->attack(it2->first);
					if (it2->first->getNumLives() > 0) {
						it2->first->attack(hero);
					}

				}///
						if (hero->getNumLives() < 0) {
							hero->setisAlive(false); //
							//cout << "hero died\n";
							Player * x = it->first;
							 players.erase(it++);
							/*
							update the output file
							*/
							if (typeid(hero) == typeid(Archer))
								 erase_players.push_back(new Archer(hero->getName(), hero->getGender(), hero->getNumLives(), hero->getPower(), Point2d(hero->getPos()->getX(), hero->getPos()->getY())));
							if (typeid(hero) == typeid(Warrior))
								 erase_players.push_back(new Warrior(hero->getName(), hero->getGender(), hero->getNumLives(), hero->getPower(), Point2d(hero->getPos()->getX(), hero->getPos()->getY())));
							if (typeid(hero) == typeid(Wizard))
								 erase_players.push_back(new Wizard(hero->getName(), hero->getGender(), hero->getNumLives(), hero->getPower(), Point2d(hero->getPos()->getX(), hero->getPos()->getY())));
							delete x;
							update();
							break;
						}
					
					else if (it2->first->getNumLives() < 0) {
						it2->first->setisAlive(false); //
						//cout << "enemy died " << hero->getNumLives()<<"\n";
						Player * x = it2->first;
						/*
						update the output file
						*/
						if (typeid(*it2->first) == typeid(Elite)) {
							 erase_players.push_back(new Elite(it2->first->getNumLives(), e->getPower(), Point2d(e->getPos()->getX(), e->getPos()->getY())));
						}
						else if (typeid(*it2->first) == typeid(Enemy))
							 erase_players.push_back(new Enemy(it2->first->getNumLives(), e->getPower(), Point2d(e->getPos()->getX(), e->getPos()->getY())));
						 players.erase(it2++);
						delete x;
						update();
					}
				break; // enemy died, no need to search for other enemy
			}
		}
	}
}

void Game::searchForItems( Hero* hero) {
	for (size_t k = 0; k <  items.size(); k++) { // check items in distance
		if (cheackRad2(hero,  items.at(k))) {
			double power = hero->getPower();
			double lives = hero->getNumLives();
			double armorpow = hero->getArmor();
			hero->use( items[k]);
			if (hero->getNumLives() != lives || hero->getPower() != power || hero->getArmor() != armorpow) {
				//hero cant have more than 100 lives
				if (hero->getNumLives() > 100) {
					hero->setNumLives(100);
				}
				//erase the item hero used
				 items.erase( items.begin() + k);
				//update the matrix without the item
				update();
			}
		}
	}
}

void Game::play() {
	
	//Game game;
	Console *cons = new Console;
	// createGame(infileName);
	read();
	cons->fillMat(&players,&items, mat);
	cons->printMat(mat,rows,cols);
	//outputfile.open("C:\\Users\\Hen\\Desktop\\outputfile.csv");
	//outputfile << "jkgf\n";
	for (it =  players.begin(); it !=  players.end(); ++it) {
	
		it->first->setisInMat(true);

		//cout << it->first->getPos()->getX() << " " << it->first->getPos()->getY() <<" " <<  it->first->getNumLives() <<" every player position \n";
		if (typeid(*it->first) == typeid(Wizard) || typeid(*it->first) == typeid(Archer) || typeid(*it->first) == typeid(Warrior)) {

			//it->first->setNumLives(100);
			Hero * hero = static_cast<Hero*>(it->first);
			hero->setPos(*it->first->getPos());
			while (hero->getisInMat()) {

				hero->setisAlive(true);
				searchForEnemys( hero);
				if (hero->getisAlive()) {

					searchForItems( hero);
					int x = hero->getPos()->getX();
					int y = hero->getPos()->getY();
					Point2d* pos = new Point2d(x, y);
					hero->move(it->second);
					int newx = hero->getPos()->getX();
					int newy = hero->getPos()->getY();
					if (IsOutsideMat( newx, newy)) {
						it->first->setPos(Point2d(x, y));
						it->first->setisInMat(false);
					}
					else {
						update();
					}
				}
				else {

				}
			}
		}
	}
		cons->printMat(mat,rows,cols);
		writeToFile();
}

bool Game::IsOutsideMat( int posx, int posy) {
	if (posx >  cols - 1)
		return true;
	 if (posy >  rows - 1)
		return true;
	 if (posx < 0)
		return true;
	 if (posy < 0)
		return true;
	 return false;
}

Game::~Game() {
	//delete every char in the matrix
	for (int i = 0; i < rows; i++) {
		delete[] mat[i];
	}
	//delete every item in the items vector
	for (size_t i = 0; i < items.size(); i++) {
		delete items.at(i);
	}
	//delete every object in the map, first the player than the point
	map<Player*, Point2d*>::iterator it = players.begin();
	for (it = players.begin(); it != players.end(); ++it) {
		delete it->first;
		delete it->second;
	}
}
