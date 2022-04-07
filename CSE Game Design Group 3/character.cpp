#include "character.h"
#include <fstream>
#include <string>
#include <iostream>

character::character() {
	name = "null";
	wallet = 0;
	savings = 0;
	interest = 0.00;
	region = 0;
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
		default:
			break;
		}
	}
	inFile.close();
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