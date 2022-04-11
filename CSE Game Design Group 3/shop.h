#pragma once
class shop {
private:
	float inflation;
	int wallet, charAtk, charDef, charHP;

public:
	int newAtk, newDef, newHP;
	shop(float a, int b, int c, int d, int e);
	void interact();
	int getWallet();
	void setWallet(int a);
};