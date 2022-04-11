#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "bank.h"
#include "character.h"
#include "world.h"
#include "title.h"
#include "shop.h"
#include "enemy.h"
#include "combat.h"

enemy
lvl0("ruffian", 50, 2),
lvl1("guard", 100, 5),
lvl2("siren", 150, 10),
lvl3("invader", 200, 15),
lvl4("denizen", 250, 20);

int main() {

	title t;
	character newChar;
	
	t.newPlayerIntro(newChar.getData(9));
	int Continue = 0;

	do {
		switch (t.mainMenu()) {
		case 1:
			newChar.create();
			newChar.setname();
			newChar.overwrite(0, newChar.name);
			newChar.overwrite(7, std::to_string(100));
			newChar.overwrite(9, std::to_string(1));
			Continue = 1;
			break;
		case 2:
			if (newChar.getData(9) == 0) {
				std::cout << "Sorry! No character data exists yet!";
				Continue = 0;
			}
			else {
				newChar.load();
				Continue = 1;
				break;
			}
		case 5:
			return 0;
			break;
		case 6:
			system("cls");
			short index;
			newChar.load();
			std::string data;
			do {
				std::cout << "/// DEV MODE ///\n";

				std::cout << "What index do you want to retrieve?: ";
				cin >> index;
				if (index != 0) {
					std::cout << newChar.getData(index) << std::endl;
					std::cout << std::endl << "Index: ";
					std::cin >> index;
					std::cout << "Data: ";
					std::cin >> data;
					newChar.overwrite(index, data);
					system("cls");
					newChar.load();
				}
			} while (index != 0);
			system("cls");
			Continue = 1;
		}
	} while (Continue == 0);

	if (newChar.getRegion() == 0) {
		newChar.overwrite(5, std::to_string(20));
		newChar.overwrite(6, std::to_string(20));
		newChar.overwrite(1, std::to_string(1000));
	}

	for (int i = newChar.getRegion(); i <= 4; i++) {
		
		newChar.overwrite(4, std::to_string(i));
		newChar.load();
		world w1(i);
		w1.regionIntro(i);

		bank b1(newChar.getInterest(), newChar.getSavings(), newChar.getWallet());
		b1.interact();
		newChar.setWallet(b1.wallet);

		shop s1(w1.getInflation(), newChar.getWallet(), newChar.getAtk(), newChar.getDef(), newChar.charHP);
		bool hasShopped = 0;
		bool foundChest = 0;

		for (int i = 0; i < w1.getNum_Encounters(); i++) {
			
			short encounter_rand;

			if ((i == 2) && (hasShopped == 0)) {
				encounter_rand = 1;
			}
			else {
				encounter_rand = w1.encounter_val();
			}

			switch (encounter_rand) {
			case 1:
				if (hasShopped == 0) {
					s1.setWallet(newChar.getWallet());
					s1.interact();
					newChar.setWallet(s1.getWallet());
					newChar.setAtk(s1.newAtk);
					newChar.setDef(s1.newDef);
					newChar.charHP = s1.newHP;
					hasShopped = 1;
				}
				else {
					i--;
				}
				break;
			case 2:
				if (foundChest == 0) {
					std::cout << "You found a chest with 1000 credits inside!\n";
					newChar.giveCoin(1000);
					foundChest = 1;
					std::this_thread::sleep_for(std::chrono::seconds(3));
				}
				else {
					i--;
				}
				break;
			case 3:
				if (newChar.getRegion() == 0) {
					std::cout << "Zero: Watch out! A ruffian is approaching!\n" << std::endl;
					combat combat(lvl0);
					combat.combat1(newChar);
					lvl0.mhealth = 50;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else if (newChar.getRegion() == 1) {
					std::cout << "A guard attacks!\n" << std::endl;
					combat combat(lvl1);
					combat.combat1(newChar);
					lvl1.mhealth = 100;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else if (newChar.getRegion() == 2) {
					std::cout << "A siren attacks!\n" << std::endl;
					combat combat(lvl2);
					combat.combat1(newChar);
					lvl2.mhealth = 150;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else if (newChar.getRegion() == 3) {
					std::cout << "An invader attacks!\n" << std::endl;
					combat combat(lvl3);
					combat.combat1(newChar);
					lvl3.mhealth = 200;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else if (newChar.getRegion() == 4) {
					std::cout << "A denizen attacks!\n" << std::endl;
					combat combat(lvl4);
					combat.combat1(newChar);
					lvl4.mhealth = 250;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else {
					continue;
				}
				break;
			default:
				break;
			}
			
			if (newChar.charHP <= 0) {
				return 0;
			}
		}	
		newChar.overwrite(1, std::to_string(newChar.getWallet()));
		newChar.overwrite(2, std::to_string(b1.savings));
		newChar.overwrite(3, std::to_string(b1.interest));
		newChar.overwrite(5, std::to_string(newChar.getAtk()));
		newChar.overwrite(6, std::to_string(s1.newDef));
		newChar.overwrite(7, std::to_string(newChar.charHP));
	}
	std::cout << "You won!\n";
	return 0;
}