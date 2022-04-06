#include <string>
#include <iostream>
#include <fstream>
#include "bank.h"
#include "character.h"

int main() {

	character newChar(0, 0, 0);
	newChar.load();

	short region = newChar.getRegion();
	int wallet = newChar.getWallet();
	int savings = newChar.getSavings();
	short index;
	int data;

	std::cout << region << ", " << wallet << ", " << savings << std::endl;

	std::cout << std::endl << "Index: ";
	std::cin >> index;
	std::cout << "Data: ";
	std::cin >> data;

	newChar.overwrite(index, data);

	newChar.load();
	wallet = newChar.getWallet();
	savings = newChar.getSavings();

	bank b1(savings, wallet);
	b1.interact();

}