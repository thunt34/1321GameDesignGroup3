#include <string>
#include <iostream>
#include "bank.h"
#include "character.h"

int main() {

	character newChar(0, 0, 0, 0);
	newChar.load();

	short region = newChar.getRegion();
	int wallet = newChar.getWallet();
	int savings = newChar.getSavings();
	double interest = newChar.getInterest();
	short index;
	std::string data;

	std::cout << region << ", " << wallet << ", " << savings << ", " << interest << std::endl;

	std::cout << std::endl << "Index: ";
	std::cin >> index;
	std::cout << "Data: ";
	std::cin >> data;

	newChar.overwrite(index, data);

	newChar.load();
	wallet = newChar.getWallet();
	savings = newChar.getSavings();
	interest = newChar.getInterest();

	bank b1(interest, savings, wallet);
	b1.interact();

	newChar.overwrite(1, std::to_string(b1.wallet));
	newChar.overwrite(2, std::to_string(b1.savings));
}
