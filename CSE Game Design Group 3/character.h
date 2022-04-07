#pragma once
#include <string>

class character {
private:
	short region;
	int wallet, savings;
	double interest;

public:
	character(short a, int b, int c, double d);
	short getRegion();
	int getWallet();
	void setWallet();
	int getSavings();
	void setSavings();
	double getInterest();
	void create();
	void load();
	void overwrite(short a, std::string b);

};

