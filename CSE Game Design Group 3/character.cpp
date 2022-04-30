#include "character.h"
#include <fstream>
#include <string>
#include <iostream>

character::character(){
	name = "null";
	wallet = 0;
	savings = 0;
	interest = 0.00;
	region = 0;
	charAtk = 0;
	charDef = 0;
	charHP = 100;
	exists = 0;
} // No overload, instead use character.load() or character.create() to call existing params or reset them

void character::create() {
	std::ofstream outFile;
	outFile.open("chardata.txt");
	outFile << name << std::endl;
	for (int i = 1; i < 10; i++) {
		outFile << 0 << std::endl;
	}
	outFile.close();
}

void character::load() {
	std::string line;
	std::ifstream inFile;
	inFile.open("chardata.txt");

	for (int i = 0; i < 10; i++) {
		getline(inFile, line);
		switch (i) {
		case 0:
			name = line;
			break;
		case 1:
			wallet = stoi(line);
			break;
		case 2:
			savings = stoi(line);
			break;
		case 3:
			interest = stod(line);
			break;
		case 4:
			region = stoi(line);
			break;
		case 5:
			charAtk = stoi(line);
			break;
		case 6:
			charDef = stoi(line);
			break;
		case 7:
			charHP = stoi(line);
			break;
		case 9:
			exists = stoi(line);
			break;
		default:
			break;
		}
	}
	inFile.close();
}

int character::getData(short a) {
	short data = 0;

	std::string line;
	std::ifstream inFile;
	inFile.open("chardata.txt");

	for (int i = 0; i < 10; i++) {
		getline(inFile, line);
		if ((i == a) && (a != 0)) {
			inFile.close();
			return stoi(line);
		}
	}
	if ((a <= 0) || (a >= 10)) {
		inFile.close();
		return -1;
	}
}

void character::overwrite(short a, std::string b) {
	std::string line;

	std::ofstream outFile;
	std::ifstream inFile;

	short index = a;
	std::string data = b;

	inFile.open("chardata.txt");
	outFile.open("hold.txt");

	for (int i = 0; i < 10; i++) {
		if (i != index) {
			getline(inFile, line);
			outFile << line << std::endl;
		}
		else if (i == index) {
			outFile << data << std::endl;
			getline(inFile, line);
		}
	}

	inFile.close();
	outFile.close();

	inFile.open("hold.txt");
	outFile.open("chardata.txt");

	for (int i = 0; i < 10; i++) {
		getline(inFile, line);
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();
}

void character::setname() {
	std::string setname;
	std::cout << "What would you like your name to be: ";
	std::cin >> setname;
	name = setname;
}

void character::attack(enemy& target) {
	srand((unsigned)time(0));
	hitchc = (rand() % 50);
	if (hitchc >= 5) {
		float damage = (float)(charAtk * (((rand() % 100) / 100) + 1));
		target.mhealth -= damage;
		if (target.mhealth < 0) {
			target.mhealth = 0;
		}
		std::cout << name << " attacks the " << target.mname << " doing " << damage << " damage!" << endl;
		std::cout << target.mname << " health: " << target.mhealth << endl;
	}
	else std::cout << name << " missed!" << endl;
}

void character::defense(enemy& target) {

	if (charDef == 0)
		std::cout << name << ", your armor is broken!" << endl;

}

void character::heal(character& target)
{
	int pChoice;
	int setPotion[2] = { p,maxp };
	std::cout << "Which Potion do you wish to use?" << endl;
	std::cout << "1.Potion - " << setPotion[0] << endl;
	std::cout << "2.Max Potion - " << setPotion[1] << endl;

	std::cin >> pChoice;
	switch (pChoice) {
	case 1:
		if (p == 0) {
			std::cout << name << " is out of Potions!" << endl;
		}
		else {
			p = p - 1;
			charHP = charHP + 20;
			if (charHP > shp) {
				charHP = shp;
			}
		}
		break;

	case 2:
		if (maxp == 0) {
			std::cout << name << " is out of Max Potions!" << endl;
		}
		else {
			maxp = maxp - 1;
			charHP = shp;
			if (charHP > shp) {
				charHP = shp;
			}
		}
		break;

	}

}
void character::flee(character& target) {
	srand((unsigned)time(0));
	cflee = (rand() % 10);
	if (cflee >= 7) {
		aflee = 1;
	}
	else cout << name << " failed to flee!" << endl;

}

void character::display() {
	if (charDef > 0) {
		std::cout << name << " health: " << charHP << "  armor: " << charDef << endl << endl;
	}
	else {
		std::cout << name << " health: " << charHP << endl << endl;
	}
}

void character::setAtk(int a) {
	charAtk = a;
}

void character::setDef(int a) {
	charDef = a;
}

void character::giveCoin(int a) {
	wallet += a;
}

short character::getRegion() {
	return region;
}

int character::getWallet() {
	return wallet;
}

int character::getSavings() {
	return savings;
}

double character::getInterest() {
	return interest;
}

bool character::getExists() {
	return bool(exists);
}

int character::getAtk() {
	return charAtk;
}

int character::getDef() {
	return charDef;
}

void character::setWallet(int a) {
	wallet = a;
}
