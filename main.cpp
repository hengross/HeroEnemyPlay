#pragma once
#include "Item.hpp"
#include "Potion.hpp"
#include "Point2d.hpp"
#include "Armor.hpp"
#include "BodyArmor.hpp"
#include "ShieldArmor.hpp"
#include "Weapon.hpp"
#include "OneHanded.hpp"
#include "TwoHanded.hpp"
#include "Bow.hpp"
#include "Crossbow.hpp"
#include "Hammer.hpp"
#include "Sword.hpp"
#include "Staff.hpp"
#include "Wand.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Elite.hpp"
#include "Hero.hpp"
#include "Archer.hpp"
#include "Warrior.hpp"
#include "Wizard.hpp"
#include <iostream>
#include "Game.hpp"
#define FILES 4


	int main(int argc, char* argv[]) {


		if (argc < 1)
			exit(0);

		if (argv[1] == std::string("-help")) {
			cout << "-n [number] -files[file1 file2 ...]" << endl;
			exit(0);
		}

		
		for (int i = 0; i < std::stoi(argv[2]); i++) {
cout<<"j\n";
			Game *g = new Game;
			g->createGame(argv[FILES + i]);
			g->play();
			//delete g;
		}

		return 0;
	}



