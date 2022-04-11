#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "enemy.h"
#include "main.h"

class character {
private:
	short region;
	int wallet, savings;
	double interest;
	bool exists;

public:
	std::string name;
	int charHP;
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
	bool getExists();
	int getAtk();
	int getDef();
	void setAtk(int a);
	void setDef(int a);
	int getData(short a);
	void setWallet(int a);

	short shp;
	int p, maxp, charAtk, charDef;
	int hitchc;
	int cflee;
	bool aflee = 0;

	void attack(enemy& target);
	void defense(enemy& target);
	void display();
	void heal(character& target);
	void flee(character& target);
};