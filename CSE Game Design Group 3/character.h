#pragma once
class character {
private:
	short region;
	int wallet, savings;

public:
	character(short a, int b, int c);
	short getRegion();
	int getWallet();
	void setWallet();
	int getSavings();
	void setSavings();
	void create();
	void load();
	void overwrite(short a, int b);

};

