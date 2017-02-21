#include "Console.hpp"

Console::Console() {};

/*
get the vectors ,mat and fill the mat(in chars)
Potion – 'P'
Weapon – 'W'
Armor – 'S'
Enemy – 'E'
Elite – 'L'
Warrior – 'A'
Archer – 'R'
Wizard – 'Z' empty
– '.'
*/
void Console::fillMat(map<Player*, Point2d*> *m, vector <Item*> *items, char** mat) {
	//map<Player*,Point2d*>::iterator iter = m->begin;
	map<Player*, Point2d*>::iterator ii;
	for (ii = m->begin(); ii != m->end(); ++ii) {//read the players - classified by archer/wizard/warrior 
		if (typeid(*ii->first) == typeid(Archer)) {
			int x = (ii->first)->getPos()->getX();
			int y = (ii->first)->getPos()->getY();
			mat[x][y] = 'A';
		}
		else if (typeid(*ii->first) == typeid(Warrior)) {
			//cout << " jd ";
			int x = (ii->first)->getPos()->getX();
			int y = (ii->first)->getPos()->getY();
			mat[x][y] = 'R';
		}
		else if (typeid(*ii->first) == typeid(Wizard)) {
			//cout << " d ";
			int x = (ii->first)->getPos()->getX();
			int y = (ii->first)->getPos()->getY();
			mat[x][y] = 'Z';
		}
		else if (typeid(*ii->first) == typeid(Elite)) {
			int x = (ii->first)->getPos()->getX();
			int y = (ii->first)->getPos()->getY();
			mat[x][y] = 'L';
		}
		else {
			int x = (ii->first)->getPos()->getX();
			int y = (ii->first)->getPos()->getY();
			mat[x][y] = 'E';
		}

	}

	for (int i = 0; i != items->size(); i++) {
		if (typeid(*items->at(i)) == typeid(Potion)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'P';
		}
		else if (typeid(*items->at(i)) == typeid(BodyArmor)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'S';
		}
		else if (typeid(*items->at(i)) == typeid(ShieldArmor)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'S';
		}
		else if (typeid(*items->at(i)) == typeid(Bow)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
		else if (typeid(*items->at(i)) == typeid(CrossBow)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
		else if (typeid(*items->at(i)) == typeid(Staff)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
		else if (typeid(*items->at(i)) == typeid(Hammer)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
		else if (typeid(*items->at(i)) == typeid(Sword)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
		else if (typeid(*items->at(i)) == typeid(Wand)) {
			int x = items->at(i)->getLoaction()->getX();
			int y = items->at(i)->getLoaction()->getY();
			mat[x][y] = 'W';
		}
	}
}

void Console::printMat(char** mat, int cols, int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << mat[i][j] << ",";
		}
		cout << "\n";
	}
}
