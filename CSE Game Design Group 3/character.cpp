#include "character.h"
#include <fstream>
#include <string>

character::character(short a, int b, int c, double d) {
	region = a;
	wallet = b;
	savings = c;
	interest = d;
}

void character::create() {
	std::ofstream outFile;
	outFile.open("chardata.txt");
	for (int i = 0; i < 10; i++) {
		outFile << 0 << std::endl;
	}
}

void character::load() {
	std::string line;
	std::ifstream inFile;
	inFile.open("chardata.txt");

	for (int i = 0; i < 10; i++) {
		getline(inFile, line);
		switch (i) {
		case 0:
			region = stoi(line);
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
		}
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