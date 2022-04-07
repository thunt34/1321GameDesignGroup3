#pragma once
#include <string>
#include <fstream>
#include <iostream>

class character {
private:
	short region;
	int wallet, savings;
	double interest;

public:
	std::string name;
	character();
	void setname();
	short getRegion();
	int getWallet();
	int getSavings();
	double getInterest();
	void create();
	void load();
	void overwrite(short a, std::string b);
	void giveCoin(int a);
};