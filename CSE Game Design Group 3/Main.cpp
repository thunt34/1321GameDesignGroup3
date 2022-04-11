#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "bank.h"
#include "character.h"
#include "world.h"
<<<<<<< Updated upstream
=======
#include "title.h"
#include "shop.h"
#include "enemy.h"
#include "combat.h"

enemy
lvl0("ruffian", 50, 2),
lvl1("guard", 100, 10),
lvl2("siren", 150, 15),
lvl3("invader", 300, 25),
lvl4("denizen", 400, 50);
>>>>>>> Stashed changes

int main() {

	character newChar;
	short select;

	std::cout << "[1] Load Game\n" << "[2] New Game\n";
	std::cin >> select;
	
	switch (select) {
	case 1:
		newChar.load();
		break;
	case 2:
		newChar.create();
		newChar.setname();
		newChar.overwrite(0, newChar.name);
		break;
	}

	short index;
	std::string data;

	std::cout << newChar.name << ", " << newChar.getWallet() << ", " << newChar.getSavings() << ", " << newChar.getInterest() << ", " << newChar.getRegion() << std::endl;

<<<<<<< Updated upstream
	std::cout << std::endl << "Index: ";
	std::cin >> index;
	std::cout << "Data: ";
	std::cin >> data;

	newChar.overwrite(index, data);
	system("cls");
	newChar.load();

	for (int i = newChar.getRegion(); i < 4; i++) {
=======
	for (int i = newChar.getRegion(); i <= 4; i++) {
		
		if (newChar.getRegion() == 0) {
			newChar.overwrite(5, std::to_string(20));
			newChar.overwrite(6, std::to_string(20));
			newChar.overwrite(1, std::to_string(1000));
		}
		
		newChar.overwrite(4, std::to_string(i));
>>>>>>> Stashed changes
		newChar.load();
		newChar.overwrite(4, std::to_string(i));
		world w1(i);

		bank b1(newChar.getInterest(), newChar.getSavings(), newChar.getWallet());
		if (newChar.getRegion() == 0) {
			std::cout << "Zero: We're coming to the bank. Each time you deposit money at a new bank, their loyalty system adds a +20% interest rate to your account.\n";
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "Zero: This interest will increase your account balance while you are away on your travels.\n" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(6));
		}
		b1.interact();

		for (int i = 0; i < w1.getNum_Encounters(); i++) {
			short encounter_rand = w1.encounter_val();
			switch (encounter_rand) {
			case 0:
				std::cout << "Encounter 0\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
				break;
			case 1:
<<<<<<< Updated upstream
				std::cout << "Encounter 1\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
				break;
			case 2:
				std::cout << "Encounter 2\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
				break;
			case 3:
				std::cout << "Encounter 3\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
=======
				if (hasShopped == 0) {
					std::cout << "You approach a shop..." << std::endl;
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
					std::cout << "Something feels a bit off...\n";
					std::this_thread::sleep_for(std::chrono::seconds(3));
					std::cout << std::endl << "Zero: Look out! A ruffian is approaching, he appears to have ill intent...\n" << std::endl;
					std::this_thread::sleep_for(std::chrono::seconds(3));
					
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
					lvl1.mhealth = 50;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else if (newChar.getRegion() == 2) {
					std::cout << "A siren attacks!\n" << std::endl;
					combat combat(lvl2);
					combat.combat1(newChar);
					lvl2.mhealth = 100;
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
					lvl4.mhealth = 200;
					newChar.charDef = newChar.getData(6);
					std::this_thread::sleep_for(std::chrono::seconds(5));
					system("cls");
				}
				else {
					continue;
				}
>>>>>>> Stashed changes
				break;
				if (newChar.charHP == 0) {
					return 0;
				}
			default:
				break;
			}
<<<<<<< Updated upstream

			newChar.overwrite(1, std::to_string(b1.wallet));
			newChar.overwrite(2, std::to_string(b1.savings));
			newChar.overwrite(3, std::to_string(b1.interest));

=======
			if (newChar.charHP <= 0) {
				return 0;
			}
>>>>>>> Stashed changes
		}	
	}
	std::cout << "You won!\n";
}