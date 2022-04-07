#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include "bank.h"
#include "character.h"
#include "world.h"

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

	std::cout << std::endl << "Index: ";
	std::cin >> index;
	std::cout << "Data: ";
	std::cin >> data;

	newChar.overwrite(index, data);
	system("cls");
	newChar.load();

	for (int i = newChar.getRegion(); i < 4; i++) {
		newChar.load();
		newChar.overwrite(4, std::to_string(i));
		world w1(i);

		bank b1(newChar.getInterest(), newChar.getSavings(), newChar.getWallet());
		b1.interact();

		for (int i = 0; i < w1.getNum_Encounters(); i++) {
			short encounter_rand = w1.encounter_val();
			switch (encounter_rand) {
			case 0:
				std::cout << "Encounter 0\n";
				std::this_thread::sleep_for(std::chrono::seconds(1));
				break;
			case 1:
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
				break;
			default:
				break;
			}

			newChar.overwrite(1, std::to_string(b1.wallet));
			newChar.overwrite(2, std::to_string(b1.savings));
			newChar.overwrite(3, std::to_string(b1.interest));

		}	
	}
}